// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CXGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXGameModeBase_generated_h
#error "CXGameModeBase.generated.h already included, missing '#pragma once' in CXGameModeBase.h"
#endif
#define CHATX_CXGameModeBase_generated_h

#define FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameModeBase(); \
	friend struct Z_Construct_UClass_ACXGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACXGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXGameModeBase)


#define FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXGameModeBase(ACXGameModeBase&&); \
	ACXGameModeBase(const ACXGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXGameModeBase) \
	NO_API virtual ~ACXGameModeBase();


#define FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_16_PROLOG
#define FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_ChatX_Source_ChatX_Game_CXGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
