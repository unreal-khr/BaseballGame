// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"

#include "BBGGameModeBase.generated.h"

class ABBGPlayerController;

/**
 *
 */
UCLASS()
class BASEBALLGAME_API ABBGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

  public:
	virtual void BeginPlay() override;
	virtual void OnPostLogin(AController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	void PrintChatMessageString(ABBGPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ABBGPlayerController* InChattingPlayerController);

	void ResetGame();

	bool JudgeGame(ABBGPlayerController* InChattingPlayerController, int InStrikeCount);

  protected:
	FString SecretNumberString;

	void AdvanceTurn(APlayerState* InSkipPlayerState = nullptr);

	void OnTurnTimeOver();

	void BroadcastMessage(const FString& InMessageString);

  protected:
	UPROPERTY(EditDefaultsOnly)
	int32 MinPlayersToStart = 2;

	UPROPERTY(EditDefaultsOnly)
	float TurnDuration = 15.f;

	UPROPERTY(EditDefaultsOnly)
	float RestartDelay = 10.f;

	FTimerHandle TurnTimerHandle;
	FTimerHandle RestartTimerHandle;
};
