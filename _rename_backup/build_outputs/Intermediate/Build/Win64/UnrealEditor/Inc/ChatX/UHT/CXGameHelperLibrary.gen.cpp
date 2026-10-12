// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatX/Helpers/CXGameHelperLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameHelperLibrary() {}

// Begin Cross Module References
CHATX_API UClass* Z_Construct_UClass_UCXGameHelperLibrary();
CHATX_API UClass* Z_Construct_UClass_UCXGameHelperLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ChatX();
// End Cross Module References

// Begin Class UCXGameHelperLibrary Function HasDuplicateDigits
struct Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics
{
	struct CXGameHelperLibrary_eventHasDuplicateDigits_Parms
	{
		FString Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Helpers" },
		{ "ModuleRelativePath", "Helpers/CXGameHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameHelperLibrary_eventHasDuplicateDigits_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
void Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CXGameHelperLibrary_eventHasDuplicateDigits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXGameHelperLibrary_eventHasDuplicateDigits_Parms), &Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXGameHelperLibrary, nullptr, "HasDuplicateDigits", nullptr, nullptr, Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::CXGameHelperLibrary_eventHasDuplicateDigits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::CXGameHelperLibrary_eventHasDuplicateDigits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCXGameHelperLibrary::execHasDuplicateDigits)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCXGameHelperLibrary::HasDuplicateDigits(Z_Param_Input);
	P_NATIVE_END;
}
// End Class UCXGameHelperLibrary Function HasDuplicateDigits

// Begin Class UCXGameHelperLibrary Function IsNumber
struct Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics
{
	struct CXGameHelperLibrary_eventIsNumber_Parms
	{
		FString Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Helpers" },
		{ "ModuleRelativePath", "Helpers/CXGameHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameHelperLibrary_eventIsNumber_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
void Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CXGameHelperLibrary_eventIsNumber_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXGameHelperLibrary_eventIsNumber_Parms), &Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXGameHelperLibrary, nullptr, "IsNumber", nullptr, nullptr, Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::CXGameHelperLibrary_eventIsNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::CXGameHelperLibrary_eventIsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCXGameHelperLibrary::execIsNumber)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCXGameHelperLibrary::IsNumber(Z_Param_Input);
	P_NATIVE_END;
}
// End Class UCXGameHelperLibrary Function IsNumber

// Begin Class UCXGameHelperLibrary
void UCXGameHelperLibrary::StaticRegisterNativesUCXGameHelperLibrary()
{
	UClass* Class = UCXGameHelperLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasDuplicateDigits", &UCXGameHelperLibrary::execHasDuplicateDigits },
		{ "IsNumber", &UCXGameHelperLibrary::execIsNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCXGameHelperLibrary);
UClass* Z_Construct_UClass_UCXGameHelperLibrary_NoRegister()
{
	return UCXGameHelperLibrary::StaticClass();
}
struct Z_Construct_UClass_UCXGameHelperLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Helpers/CXGameHelperLibrary.h" },
		{ "ModuleRelativePath", "Helpers/CXGameHelperLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCXGameHelperLibrary_HasDuplicateDigits, "HasDuplicateDigits" }, // 419333213
		{ &Z_Construct_UFunction_UCXGameHelperLibrary_IsNumber, "IsNumber" }, // 1766729662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXGameHelperLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXGameHelperLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHelperLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXGameHelperLibrary_Statics::ClassParams = {
	&UCXGameHelperLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHelperLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXGameHelperLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXGameHelperLibrary()
{
	if (!Z_Registration_Info_UClass_UCXGameHelperLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXGameHelperLibrary.OuterSingleton, Z_Construct_UClass_UCXGameHelperLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXGameHelperLibrary.OuterSingleton;
}
template<> CHATX_API UClass* StaticClass<UCXGameHelperLibrary>()
{
	return UCXGameHelperLibrary::StaticClass();
}
UCXGameHelperLibrary::UCXGameHelperLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXGameHelperLibrary);
UCXGameHelperLibrary::~UCXGameHelperLibrary() {}
// End Class UCXGameHelperLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXGameHelperLibrary, UCXGameHelperLibrary::StaticClass, TEXT("UCXGameHelperLibrary"), &Z_Registration_Info_UClass_UCXGameHelperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXGameHelperLibrary), 2950681084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_237162167(TEXT("/Script/ChatX"),
	Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
