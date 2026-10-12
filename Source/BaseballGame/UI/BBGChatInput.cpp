// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/BBGChatInput.h"

#include "Components/EditableTextbox.h"
#include "Player/BBGPlayerController.h"
#include "Player/BBGPlayerState.h"

void UBBGChatInput::NativeConstruct()
{
	Super::NativeConstruct();

	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == false)
	{
		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UBBGChatInput::NativeDestruct()
{
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true)
	{
		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}

	Super::NativeDestruct();
}

void UBBGChatInput::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		APlayerController* PC = GetOwningPlayer();
		if (IsValid(PC) == true)
		{
			ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(PC);
			if (IsValid(BBGPC) == true)
			{
				ABBGPlayerState* BBGPS = BBGPC->GetPlayerState<ABBGPlayerState>();
				if (IsValid(BBGPS) == true)
				{
					BBGPC->PrintChatMessageString(Text.ToString());

					EditableTextBox_ChatInput->SetText(FText());
				}
			}
		}
	}
}
