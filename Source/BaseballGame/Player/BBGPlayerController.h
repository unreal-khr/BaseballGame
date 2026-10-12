// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerController.h"

#include "BBGPlayerController.generated.h"

class UUserWidget;

/**
 *
 */
UCLASS()
class BASEBALLGAME_API ABBGPlayerController : public APlayerController
{
	GENERATED_BODY()

  public:
	ABBGPlayerController();

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	void SetChatMessageString(const FString& InChatMessageString);

	void PrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InChatMessagaString);

  protected:
	FString ChatMessageString;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> MainScreenWidgetClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> MainScreenWidgetInstance;

  public:
	void ShowNotificationText(const FText& InText, float InDuration);
	void ResetNotificationText();

	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;

  protected:
	FTimerHandle NotificationHideTimerHandle;
};
