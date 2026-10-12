// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"

#include "ButtonPanelWidget.generated.h"

class UButton;
class UTextBlock;

/**
 *
 */
UCLASS()
class BASEBALLGAME_API UButtonPanelWidget : public UUserWidget
{
	GENERATED_BODY()

  public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	void ClearInput();

  public:
	UFUNCTION()
	void OnClickedEnter();
	UFUNCTION()
	void OnClickedBack();

	UFUNCTION()
	void OnClickedBtn1();
	UFUNCTION()
	void OnClickedBtn2();
	UFUNCTION()
	void OnClickedBtn3();
	UFUNCTION()
	void OnClickedBtn4();
	UFUNCTION()
	void OnClickedBtn5();
	UFUNCTION()
	void OnClickedBtn6();
	UFUNCTION()
	void OnClickedBtn7();
	UFUNCTION()
	void OnClickedBtn8();
	UFUNCTION()
	void OnClickedBtn9();

	void AppendDigit(int32 InDigit);
	void RefreshInputText();

  protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Enter;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Back;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num1;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num2;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num3;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num4;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num5;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num6;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num7;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num8;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Btn_Num9;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TXT_Guess;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TXT_Turn;

  private:
	int32 MaxDigits = 3;
	FString InputString;
};
