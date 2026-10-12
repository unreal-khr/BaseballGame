// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameStateBase.h"

#include "BBGGameStateBase.generated.h"

/**
 *
 */
UCLASS()
class BASEBALLGAME_API ABBGGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

  public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

  public:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));

	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLogoutMessage(const FString& InNameString = FString(TEXT("XNAME")));

	void SetCurrentTurn(APlayerState* InPlayerState, float InTurnEndServerTime);

	bool IsPlayersTurn(const APlayerState* InPlayerState) const;

  public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	TObjectPtr<APlayerState> CurrentTurnPlayerState;

	UPROPERTY(Replicated, BlueprintReadOnly)
	float TurnEndServerTime = 0.f;

	UPROPERTY(Replicated, BlueprintReadOnly)
	float NextRoundServerTime = 0.f;
};
