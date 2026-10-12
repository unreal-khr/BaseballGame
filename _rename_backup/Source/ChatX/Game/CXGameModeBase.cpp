// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/CXGameModeBase.h"

#include "CXGameStateBase.h"
#include "EngineUtils.h"

#include "Kismet/GameplayStatics.h"
#include "Player/CXPlayerController.h"
#include "Player/CXPlayerState.h"

void ACXGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *SecretNumberString);
}

void ACXGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	// ACXGameStateBase* CXGameStateBase = GetGameState<ACXGameStateBase>();
	// if (IsValid(CXGameStateBase) == true)
	//{
	//	CXGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXX"));
	// }

	// ACXPlayerController* CXPlayerController = Cast<ACXPlayerController>(NewPlayer);
	// if (IsValid(CXPlayerController) == true)
	//{
	//	AllPlayerControllers.Add(CXPlayerController);
	// }

	ACXPlayerController* CXPlayerController = Cast<ACXPlayerController>(NewPlayer);
	if (IsValid(CXPlayerController) == true)
	{
		CXPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
	}

	ACXGameStateBase* CXGameStateBase = GetGameState<ACXGameStateBase>();
	if (IsValid(CXGameStateBase) == true)
	{
		NewPlayer->PlayerState->SetPlayerName(FString::Printf(TEXT("Player%d"), CXGameStateBase->PlayerArray.Num()));

		CXGameStateBase->MulticastRPCBroadcastLoginMessage(NewPlayer->PlayerState->GetPlayerName());
	}
}

void ACXGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	if (Exiting && Exiting->PlayerState)
	{
		ACXGameStateBase* CXGameStateBase = GetGameState<ACXGameStateBase>();
		if (IsValid(CXGameStateBase) == true)
		{
			CXGameStateBase->MulticastRPCBroadcastLogoutMessage(Exiting->PlayerState->GetPlayerName());
		}
	}
}

FString ACXGameModeBase::GenerateSecretNumber()
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

bool ACXGameModeBase::IsGuessNumberString(const FString& InNumberString)
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

FString ACXGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
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

void ACXGameModeBase::PrintChatMessageString(ACXPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	if (IsGuessNumberString(InChatMessageString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, InChatMessageString);

		IncreaseGuessCount(InChattingPlayerController);

		for (TActorIterator<ACXPlayerController> It(GetWorld()); It; ++It)
		{
			ACXPlayerController* CXPlayerController = *It;
			if (IsValid(CXPlayerController) == true)
			{
				ACXPlayerState* CXPS = InChattingPlayerController->GetPlayerState<ACXPlayerState>();
				if (IsValid(CXPS) == true)
				{
					FString CombinedMessageString = CXPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString + TEXT(" -> ") + JudgeResultString;
					CXPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);

					int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
					JudgeGame(InChattingPlayerController, StrikeCount);
				}
			}
		}
	}
	else
	{
		for (TActorIterator<ACXPlayerController> It(GetWorld()); It; ++It)
		{
			ACXPlayerController* CXPlayerController = *It;
			if (IsValid(CXPlayerController) == true)
			{
				CXPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
	}
}

void ACXGameModeBase::IncreaseGuessCount(ACXPlayerController* InChattingPlayerController)
{
	ACXPlayerState* CXPS = InChattingPlayerController->GetPlayerState<ACXPlayerState>();
	if (IsValid(CXPS) == true)
	{
		CXPS->CurrentGuessCount++;
	}
}

void ACXGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	ACXGameStateBase* CXGS = GetGameState<ACXGameStateBase>();
	if (IsValid(CXGS) == true)
	{
		for (APlayerState* PS : CXGS->PlayerArray)
		{
			ACXPlayerState* CXPS = Cast<ACXPlayerState>(PS);
			if (IsValid(CXPS) == true)
			{
				CXPS->CurrentGuessCount = 0;
			}
		}
	}
}

void ACXGameModeBase::JudgeGame(ACXPlayerController* InChattingPlayerController, int InStrikeCount)
{
	ACXGameStateBase* CXGS = GetGameState<ACXGameStateBase>();

	if (3 == InStrikeCount)
	{
		ACXPlayerState* InChattingPlayerCXPS = InChattingPlayerController->GetPlayerState<ACXPlayerState>();

		for (APlayerState* PS : CXGS->PlayerArray)
		{
			AController* C = PS->GetOwner<AController>();
			ACXPlayerController* CXPC = Cast<ACXPlayerController>(C);
			if (IsValid(CXPC) == true)
			{
				CXPC->NotificationText = FText::FromString(InChattingPlayerCXPS->GetPlayerName() + TEXT(" has won the game."));

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;

		for (APlayerState* PS : CXGS->PlayerArray)
		{
			ACXPlayerState* CXPS = Cast<ACXPlayerState>(PS);
			if (IsValid(CXPS) == true)
			{
				if (CXPS->CurrentGuessCount < CXPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (APlayerState* PS : CXGS->PlayerArray)
			{
				AController* C = PS->GetOwner<AController>();
				ACXPlayerController* CXPC = Cast<ACXPlayerController>(PS);
				CXPC->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}
