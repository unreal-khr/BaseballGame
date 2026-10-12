// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/CXPlayerState.h"

#include "Net/UnrealNetwork.h"

ACXPlayerState::ACXPlayerState()
	: CurrentGuessCount(0), MaxGuessCount(3)
{
	bReplicates = true;
}

void ACXPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentGuessCount);
	DOREPLIFETIME(ThisClass, MaxGuessCount);
}

FString ACXPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = GetPlayerName() + TEXT("(") + FString::FromInt(CurrentGuessCount) + TEXT("/") + FString::FromInt(MaxGuessCount) + TEXT(")");
	return PlayerInfoString;
}
