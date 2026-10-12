// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/BBGPlayerController.h"

#include "BaseballGame.h"
#include "EngineUtils.h"

#include "Blueprint/UserWidget.h"
#include "Game/BBGGameModeBase.h"
#include "Helpers/BBGGameHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Player/BBGPlayerState.h"

ABBGPlayerController::ABBGPlayerController()
{
	bReplicates = true;
}

void ABBGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}

	FInputModeUIOnly InputModeUIOnly;
	InputModeUIOnly.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	SetInputMode(InputModeUIOnly);
	bShowMouseCursor = true;

	if (IsValid(MainScreenWidgetClass) == true)
	{
		MainScreenWidgetInstance = CreateWidget<UUserWidget>(this, MainScreenWidgetClass);
		if (IsValid(MainScreenWidgetInstance) == true)
		{
			MainScreenWidgetInstance->AddToViewport();
		}
	}
}

void ABBGPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}

void ABBGPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString.TrimStartAndEnd();

	// PrintChatMessageString(ChatMessageString);
	if (IsLocalController() == true)
	{
		// ServerRPCPrintChatMessageString(InChatMessageString);

		ABBGPlayerState* BBGPS = GetPlayerState<ABBGPlayerState>();
		if (IsValid(BBGPS) == true)
		{
			// FString CombinedMessageString = BBGPS->PlayerNameString + TEXT(": ") + InChatMessageString;
			ServerRPCPrintChatMessageString(ChatMessageString);
		}
	}
}

void ABBGPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	// UKismetSystemLibrary::PrintString(this, ChatMessageString, true, true, FLinearColor::Red, 5.0f);

	/*FString NetModeString = BBGFunctionLibrary::GetNetModeString(this);
	FString CombinedMessageString = FString::Printf(TEXT("%s: %s"), *NetModeString, *InChatMessageString);
	BBGFunctionLibrary::MyPrintString(this, CombinedMessageString, 10.f);*/

	BBGFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}



void ABBGPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}

void ABBGPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	if (InChatMessageString.Len() != 3 || UBBGGameHelperLibrary::HasDuplicateDigits(InChatMessageString) || !UBBGGameHelperLibrary::IsNumber(InChatMessageString))
	{
		ClientRPCPrintChatMessageString(TEXT("Input only 3 number. Input again"));
		return;
	}

	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ABBGGameModeBase* BBGGM = Cast<ABBGGameModeBase>(GM);
		if (IsValid(BBGGM) == true)
		{
			BBGGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}

void ABBGPlayerController::ShowNotificationText(const FText& InText, float InDuration)
{
	NotificationText = InText;
	GetWorld()->GetTimerManager().SetTimer(NotificationHideTimerHandle, this, &ThisClass::ResetNotificationText, InDuration, false);
}

void ABBGPlayerController::ResetNotificationText()
{
	NotificationText = FText::GetEmpty();
}
