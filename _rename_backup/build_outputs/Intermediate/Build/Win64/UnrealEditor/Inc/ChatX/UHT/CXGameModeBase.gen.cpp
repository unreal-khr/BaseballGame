// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatX/Game/CXGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameModeBase() {}

// Begin Cross Module References
CHATX_API UClass* Z_Construct_UClass_ACXGameModeBase();
CHATX_API UClass* Z_Construct_UClass_ACXGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ChatX();
// End Cross Module References

// Begin Class ACXGameModeBase
void ACXGameModeBase::StaticRegisterNativesACXGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXGameModeBase);
UClass* Z_Construct_UClass_ACXGameModeBase_NoRegister()
{
	return ACXGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACXGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/CXGameModeBase.h" },
		{ "ModuleRelativePath", "Game/CXGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameModeBase_Statics::ClassParams = {
	&ACXGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameModeBase()
{
	if (!Z_Registration_Info_UClass_ACXGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameModeBase.OuterSingleton, Z_Construct_UClass_ACXGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameModeBase.OuterSingleton;
}
template<> CHATX_API UClass* StaticClass<ACXGameModeBase>()
{
	return ACXGameModeBase::StaticClass();
}
ACXGameModeBase::ACXGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameModeBase);
ACXGameModeBase::~ACXGameModeBase() {}
// End Class ACXGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameModeBase, ACXGameModeBase::StaticClass, TEXT("ACXGameModeBase"), &Z_Registration_Info_UClass_ACXGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameModeBase), 2774267151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_2492006129(TEXT("/Script/ChatX"),
	Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
