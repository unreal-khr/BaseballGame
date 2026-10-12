// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatX/Game/CXGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameStateBase() {}

// Begin Cross Module References
CHATX_API UClass* Z_Construct_UClass_ACXGameStateBase();
CHATX_API UClass* Z_Construct_UClass_ACXGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_ChatX();
// End Cross Module References

// Begin Class ACXGameStateBase Function MulticastRPCBroadcastLoginMessage
struct CXGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static const FName NAME_ACXGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void ACXGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	CXGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ACXGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/CXGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", nullptr, nullptr, Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(CXGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class ACXGameStateBase Function MulticastRPCBroadcastLoginMessage

// Begin Class ACXGameStateBase Function MulticastRPCBroadcastLogoutMessage
struct CXGameStateBase_eventMulticastRPCBroadcastLogoutMessage_Parms
{
	FString InNameString;
};
static const FName NAME_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage = FName(TEXT("MulticastRPCBroadcastLogoutMessage"));
void ACXGameStateBase::MulticastRPCBroadcastLogoutMessage(const FString& InNameString)
{
	CXGameStateBase_eventMulticastRPCBroadcastLogoutMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/CXGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameStateBase_eventMulticastRPCBroadcastLogoutMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXGameStateBase, nullptr, "MulticastRPCBroadcastLogoutMessage", nullptr, nullptr, Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::PropPointers), sizeof(CXGameStateBase_eventMulticastRPCBroadcastLogoutMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXGameStateBase_eventMulticastRPCBroadcastLogoutMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameStateBase::execMulticastRPCBroadcastLogoutMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLogoutMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class ACXGameStateBase Function MulticastRPCBroadcastLogoutMessage

// Begin Class ACXGameStateBase
void ACXGameStateBase::StaticRegisterNativesACXGameStateBase()
{
	UClass* Class = ACXGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &ACXGameStateBase::execMulticastRPCBroadcastLoginMessage },
		{ "MulticastRPCBroadcastLogoutMessage", &ACXGameStateBase::execMulticastRPCBroadcastLogoutMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXGameStateBase);
UClass* Z_Construct_UClass_ACXGameStateBase_NoRegister()
{
	return ACXGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ACXGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/CXGameStateBase.h" },
		{ "ModuleRelativePath", "Game/CXGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 1433109652
		{ &Z_Construct_UFunction_ACXGameStateBase_MulticastRPCBroadcastLogoutMessage, "MulticastRPCBroadcastLogoutMessage" }, // 2451528107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameStateBase_Statics::ClassParams = {
	&ACXGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameStateBase()
{
	if (!Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton, Z_Construct_UClass_ACXGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton;
}
template<> CHATX_API UClass* StaticClass<ACXGameStateBase>()
{
	return ACXGameStateBase::StaticClass();
}
ACXGameStateBase::ACXGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameStateBase);
ACXGameStateBase::~ACXGameStateBase() {}
// End Class ACXGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameStateBase, ACXGameStateBase::StaticClass, TEXT("ACXGameStateBase"), &Z_Registration_Info_UClass_ACXGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameStateBase), 3680820890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_1013389425(TEXT("/Script/ChatX"),
	Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
