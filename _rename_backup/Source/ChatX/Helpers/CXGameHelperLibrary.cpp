// Fill out your copyright notice in the Description page of Project Settings.


#include "Helpers/CXGameHelperLibrary.h"

bool UCXGameHelperLibrary::HasDuplicateDigits(const FString& Input)
{
	bool Digits[10] = {false};
	for (TCHAR c : Input)
	{
		if (FChar::IsDigit(c))
		{
			int32 Index = c - '0';
			if (Digits[Index])
				return true;
			Digits[Index] = true;
		}
	}
	return false;
}

bool UCXGameHelperLibrary::IsNumber(const FString& Input)
{
	if (Input.IsEmpty())
		return false;

	for (TCHAR c : Input)
		if (!FChar::IsDigit(c))
			return false;
	return true;
}
