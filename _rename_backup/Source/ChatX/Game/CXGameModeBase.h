// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"

#include "CXGameModeBase.generated.h"

class ACXPlayerController;

/**
 *
 */
UCLASS()
class CHATX_API ACXGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

  public:
	virtual void BeginPlay() override;
	virtual void OnPostLogin(AController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	void PrintChatMessageString(ACXPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ACXPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ACXPlayerController* InChattingPlayerController, int InStrikeCount);

  protected:
	FString SecretNumberString;
};
