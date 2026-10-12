// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"

#include "BBGGameHelperLibrary.generated.h"

/**
 *
 */
UCLASS()
class BASEBALLGAME_API UBBGGameHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

  public:
	UFUNCTION(BlueprintCallable, Category = "Helpers")
	static bool HasDuplicateDigits(const FString& Input);

	UFUNCTION(BlueprintCallable, Category = "Helpers")
	static bool IsNumber(const FString& Input);
};

