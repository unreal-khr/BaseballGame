// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/ButtonPanelWidget.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Game/BBGGameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Player/BBGPlayerController.h"

void UButtonPanelWidget::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);

	ABBGGameStateBase* BBGGS = GetWorld()->GetGameState<ABBGGameStateBase>();
	APlayerController* PC = GetOwningPlayer();
	if (IsValid(BBGGS) == false || IsValid(PC) == false)
		return;

	const bool bIsMyTurn = BBGGS->IsPlayersTurn(PC->PlayerState);
	Btn_Enter->SetIsEnabled(bIsMyTurn);

	if (IsValid(TXT_Turn) == false)
		return;

	APlayerState* TurnPS = BBGGS->CurrentTurnPlayerState;
	if (IsValid(TurnPS) == false)
	{
		if (BBGGS->NextRoundServerTime > 0.f)
		{
			const int32 RestartSeconds = FMath::Max(0, FMath::CeilToInt(BBGGS->NextRoundServerTime - BBGGS->GetServerWorldTimeSeconds()));
			TXT_Turn->SetText(FText::FromString(FString::Printf(TEXT("Next Game in %d"), RestartSeconds)));
			return;
		}
		else
		{
			TXT_Turn->SetText(FText::FromString(TEXT("Waiting for players...")));
			return;
		}
	}

	const int32 RemainSeconds = FMath::Max(0, FMath::CeilToInt(BBGGS->TurnEndServerTime - BBGGS->GetServerWorldTimeSeconds()));
	const FString TurnString = (bIsMyTurn == true) ? FString::Printf(TEXT("My turn (%d)"), RemainSeconds) : FString::Printf(TEXT("%s's turn (%d)"), *TurnPS->GetPlayerName(), RemainSeconds);

	TXT_Turn->SetText(FText::FromString(TurnString));
}

void UButtonPanelWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_Enter->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedEnter);
	Btn_Back->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBack);
	Btn_Num1->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn1);
	Btn_Num2->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn2);
	Btn_Num3->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn3);
	Btn_Num4->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn4);
	Btn_Num5->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn5);
	Btn_Num6->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn6);
	Btn_Num7->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn7);
	Btn_Num8->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn8);
	Btn_Num9->OnClicked.AddUniqueDynamic(this, &ThisClass::OnClickedBtn9);

	ClearInput();
}

void UButtonPanelWidget::NativeDestruct()
{
	Btn_Enter->OnClicked.RemoveAll(this);
	Btn_Back->OnClicked.RemoveAll(this);
	Btn_Num1->OnClicked.RemoveAll(this);
	Btn_Num2->OnClicked.RemoveAll(this);
	Btn_Num3->OnClicked.RemoveAll(this);
	Btn_Num4->OnClicked.RemoveAll(this);
	Btn_Num5->OnClicked.RemoveAll(this);
	Btn_Num6->OnClicked.RemoveAll(this);
	Btn_Num7->OnClicked.RemoveAll(this);
	Btn_Num8->OnClicked.RemoveAll(this);
	Btn_Num9->OnClicked.RemoveAll(this);

	Super::NativeDestruct();
}

void UButtonPanelWidget::OnClickedEnter()
{
	if (InputString.Len() != MaxDigits)
		return;

	ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(GetOwningPlayer());
	if (IsValid(BBGPC) == true)
	{
		BBGPC->SetChatMessageString(InputString);
	}

	ClearInput();
}

void UButtonPanelWidget::OnClickedBack()
{
	InputString.LeftChopInline(1);
	RefreshInputText();
}

void UButtonPanelWidget::OnClickedBtn1()
{
	AppendDigit(1);
}

void UButtonPanelWidget::OnClickedBtn2()
{
	AppendDigit(2);
}

void UButtonPanelWidget::OnClickedBtn3()
{
	AppendDigit(3);
}

void UButtonPanelWidget::OnClickedBtn4()
{
	AppendDigit(4);
}

void UButtonPanelWidget::OnClickedBtn5()
{
	AppendDigit(5);
}

void UButtonPanelWidget::OnClickedBtn6()
{
	AppendDigit(6);
}

void UButtonPanelWidget::OnClickedBtn7()
{
	AppendDigit(7);
}

void UButtonPanelWidget::OnClickedBtn8()
{
	AppendDigit(8);
}

void UButtonPanelWidget::OnClickedBtn9()
{
	AppendDigit(9);
}

void UButtonPanelWidget::AppendDigit(int32 InDigit)
{
	if (InputString.Len() >= MaxDigits)
		return;

	const FString DigitString = FString::FromInt(InDigit);

	if (InputString.Contains(DigitString) == true)
		return;

	InputString += DigitString;
	RefreshInputText();
}

void UButtonPanelWidget::ClearInput()
{
	InputString.Empty();
	RefreshInputText();
}

void UButtonPanelWidget::RefreshInputText()
{
	TXT_Guess->SetText(FText::FromString(InputString));
}
