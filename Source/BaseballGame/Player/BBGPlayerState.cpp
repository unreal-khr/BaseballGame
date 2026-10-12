// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/BBGPlayerState.h"

#include "Net/UnrealNetwork.h"

ABBGPlayerState::ABBGPlayerState()
	: CurrentGuessCount(0), MaxGuessCount(3)
{
	bReplicates = true;
}

void ABBGPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentGuessCount);
	DOREPLIFETIME(ThisClass, MaxGuessCount);
}

FString ABBGPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = GetPlayerName() + TEXT("(") + FString::FromInt(CurrentGuessCount) + TEXT("/") + FString::FromInt(MaxGuessCount) + TEXT(")");
	return PlayerInfoString;
}
