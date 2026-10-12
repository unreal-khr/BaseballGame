// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/BBGGameModeBase.h"

#include "BBGGameStateBase.h"
#include "EngineUtils.h"

#include "Kismet/GameplayStatics.h"
#include "Player/BBGPlayerController.h"
#include "Player/BBGPlayerState.h"

void ABBGGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *SecretNumberString);
}

void ABBGGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	// ABBGGameStateBase* BBGGameStateBase = GetGameState<ABBGGameStateBase>();
	// if (IsValid(BBGGameStateBase) == true)
	//{
	//	BBGGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXX"));
	// }

	// ABBGPlayerController* BBGPlayerController = Cast<ABBGPlayerController>(NewPlayer);
	// if (IsValid(BBGPlayerController) == true)
	//{
	//	AllPlayerControllers.Add(BBGPlayerController);
	// }

	ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(NewPlayer);
	if (IsValid(BBGPC) == true)
	{
		BBGPC->ShowNotificationText(FText::FromString(TEXT("Connected to the game server.")), RestartDelay);
	}

	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == true)
	{
		NewPlayer->PlayerState->SetPlayerName(FString::Printf(TEXT("Player%d"), BBGGS->PlayerArray.Num()));

		BBGGS->MulticastRPCBroadcastLoginMessage(NewPlayer->PlayerState->GetPlayerName());
	}

	if (IsValid(BBGGS) == true && BBGGS->PlayerArray.Num() >= MinPlayersToStart && IsValid(BBGGS->CurrentTurnPlayerState) == false && GetWorld()->GetTimerManager().IsTimerActive(RestartTimerHandle) == false)
		AdvanceTurn();
}

void ABBGGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == false || Exiting == nullptr || Exiting->PlayerState == nullptr)
		return;

	BBGGS->MulticastRPCBroadcastLogoutMessage(Exiting->PlayerState->GetPlayerName());

	const bool bNotEnoughPlayers = BBGGS->PlayerArray.Num() - 1 < MinPlayersToStart;
	const bool bIsWaitingRestart = GetWorld()->GetTimerManager().IsTimerActive(RestartTimerHandle);

	if (bIsWaitingRestart == false && (BBGGS->IsPlayersTurn(Exiting->PlayerState) == true || bNotEnoughPlayers) == true)
		AdvanceTurn(Exiting->PlayerState);
}

FString ABBGGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num)
										{ return Num > 0; });
	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ABBGGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do
	{
		if (InNumberString.Len() != 3)
			break;

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
			break;

		bCanPlay = true;
	} while (false);

	return bCanPlay;
}

FString ABBGGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ABBGGameModeBase::PrintChatMessageString(ABBGPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == false || IsValid(InChattingPlayerController) == false)
		return;

	if (BBGGS->IsPlayersTurn(InChattingPlayerController->PlayerState) == false)
	{
		InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("It's not your turn."));
		return;
	}

	if (IsGuessNumberString(InChatMessageString) == false)
	{
		BroadcastMessage(InChatMessageString);
		return;
	}

	ABBGPlayerState* BBGPS = InChattingPlayerController->GetPlayerState<ABBGPlayerState>();
	if (IsValid(BBGPS) == false)
		return;

	FString JudgeResultString = JudgeResult(SecretNumberString, InChatMessageString);

	IncreaseGuessCount(InChattingPlayerController);

	BroadcastMessage(BBGPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString + TEXT(" -> ") + JudgeResultString);

	int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
	if (JudgeGame(InChattingPlayerController, StrikeCount) == false)
		AdvanceTurn();
}

void ABBGGameModeBase::IncreaseGuessCount(ABBGPlayerController* InChattingPlayerController)
{
	ABBGPlayerState* BBGPS = InChattingPlayerController->GetPlayerState<ABBGPlayerState>();
	if (IsValid(BBGPS) == true)
	{
		BBGPS->CurrentGuessCount++;
	}
}

void ABBGGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == true)
		BBGGS->NextRoundServerTime = 0.f;

	SecretNumberString = GenerateSecretNumber();

	if (IsValid(BBGGS) == true)
	{
		for (APlayerState* PS : BBGGS->PlayerArray)
		{
			ABBGPlayerState* BBGPS = Cast<ABBGPlayerState>(PS);
			if (IsValid(BBGPS) == true)
				BBGPS->CurrentGuessCount = 0;
		}

		BBGGS->SetCurrentTurn(nullptr, 0.f);
		AdvanceTurn();
	}
}

bool ABBGGameModeBase::JudgeGame(ABBGPlayerController* InChattingPlayerController, int InStrikeCount)
{
	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == false)
		return false;

	FString ResultString;

	if (3 == InStrikeCount && IsValid(InChattingPlayerController) == true)
	{
		ResultString = InChattingPlayerController->PlayerState->GetPlayerName() + TEXT(" has won the game. The new game will start soon.");
	}
	else
	{
		for (APlayerState* PS : BBGGS->PlayerArray)
		{
			ABBGPlayerState* BBGPS = Cast<ABBGPlayerState>(PS);
			if (IsValid(BBGPS) == true && BBGPS->CurrentGuessCount < BBGPS->MaxGuessCount)
				return false;
		}

		ResultString = TEXT("Draw... The new game will start soon.");
	}

	for (APlayerState* PS : BBGGS->PlayerArray)
	{
		ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(PS->GetOwner());
		if (IsValid(BBGPC) == true)
		{
			BBGPC->ShowNotificationText(FText::FromString(ResultString), RestartDelay);
		}
	}

	GetWorldTimerManager().ClearTimer(TurnTimerHandle);
	BBGGS->SetCurrentTurn(nullptr, 0.f);
	BBGGS->NextRoundServerTime = BBGGS->GetServerWorldTimeSeconds() + RestartDelay;

	GetWorld()->GetTimerManager().SetTimer(RestartTimerHandle, this, &ThisClass::ResetGame, RestartDelay, false);
	return true;
}

void ABBGGameModeBase::AdvanceTurn(APlayerState* InSkipPlayerState)
{
	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == false)
		return;

	GetWorld()->GetTimerManager().ClearTimer(TurnTimerHandle);

	const int32 NumActivePlayers = BBGGS->PlayerArray.Num() - (InSkipPlayerState != nullptr ? 1 : 0);
	if (NumActivePlayers < MinPlayersToStart)
	{
		BBGGS->SetCurrentTurn(nullptr, 0.f);

		return;
	}

	const int32 NumPlayers = BBGGS->PlayerArray.Num();
	const int32 CurrentIndex = BBGGS->PlayerArray.Find(BBGGS->CurrentTurnPlayerState);

	for (int32 Step = 1; Step <= NumPlayers; ++Step)
	{
		const int32 Index = (CurrentIndex + Step + NumPlayers) % NumPlayers;
		ABBGPlayerState* BBGPS = Cast<ABBGPlayerState>(BBGGS->PlayerArray[Index]);

		if (IsValid(BBGPS) == true && BBGPS != InSkipPlayerState && BBGPS->CurrentGuessCount < BBGPS->MaxGuessCount)
		{
			BBGGS->SetCurrentTurn(BBGPS, BBGGS->GetServerWorldTimeSeconds() + TurnDuration);
			GetWorld()->GetTimerManager().SetTimer(TurnTimerHandle, this, &ThisClass::OnTurnTimeOver, TurnDuration, false);

			BroadcastMessage(BBGPS->GetPlayerName() + TEXT("'s turn."));
			return;
		}
	}

	BBGGS->SetCurrentTurn(nullptr, 0.f);
}

void ABBGGameModeBase::OnTurnTimeOver()
{
	ABBGGameStateBase* BBGGS = GetGameState<ABBGGameStateBase>();
	if (IsValid(BBGGS) == false)
		return;

	ABBGPlayerState* BBGPS = Cast<ABBGPlayerState>(BBGGS->CurrentTurnPlayerState);
	if (IsValid(BBGPS) == true)
	{
		BBGPS->CurrentGuessCount++;
		BroadcastMessage(BBGPS->GetPlayerInfoString() + TEXT(": time over"));

		ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(BBGPS->GetOwner());
		if (JudgeGame(BBGPC, 0) == true)
			return;
	}

	AdvanceTurn();
}

void ABBGGameModeBase::BroadcastMessage(const FString& InMessageString)
{
	for (TActorIterator<ABBGPlayerController> It(GetWorld()); It; ++It)
	{
		ABBGPlayerController* BBGPlayerController = *It;
		if (IsValid(BBGPlayerController) == true)
			BBGPlayerController->ClientRPCPrintChatMessageString(InMessageString);
	}
}
