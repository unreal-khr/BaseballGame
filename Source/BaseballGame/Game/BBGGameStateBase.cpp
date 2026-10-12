// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/BBGGameStateBase.h"

#include "Kismet/GameplayStatics.h"
#include "Player/BBGPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerState.h"

void ABBGGameStateBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentTurnPlayerState);
	DOREPLIFETIME(ThisClass, TurnEndServerTime);
	DOREPLIFETIME(ThisClass, NextRoundServerTime);
}


void ABBGGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(PC);
			if (IsValid(BBGPC) == true)
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				BBGPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}

void ABBGGameStateBase::MulticastRPCBroadcastLogoutMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(PC);
			if (IsValid(BBGPC) == true)
			{
				FString NotificationString = InNameString + TEXT(" has left the game.");
				BBGPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}

void ABBGGameStateBase::SetCurrentTurn(APlayerState* InPlayerState, float InTurnEndServerTime)
{
	CurrentTurnPlayerState = InPlayerState;
	TurnEndServerTime = InTurnEndServerTime;
}

bool ABBGGameStateBase::IsPlayersTurn(const APlayerState* InPlayerState) const
{
	return IsValid(InPlayerState) == true && InPlayerState == CurrentTurnPlayerState;
}
