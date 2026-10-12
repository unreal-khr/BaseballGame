// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CXGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXGameStateBase_generated_h
#error "CXGameStateBase.generated.h already included, missing '#pragma once' in CXGameStateBase.h"
#endif
#define CHATX_CXGameStateBase_generated_h

#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLogoutMessage_Implementation(const FString& InNameString); \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLogoutMessage); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_CALLBACK_WRAPPERS
#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameStateBase(); \
	friend struct Z_Construct_UClass_ACXGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACXGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXGameStateBase)


#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXGameStateBase(ACXGameStateBase&&); \
	ACXGameStateBase(const ACXGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXGameStateBase) \
	NO_API virtual ~ACXGameStateBase();


#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_14_PROLOG
#define FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_CALLBACK_WRAPPERS \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_ChatX_Source_ChatX_Game_CXGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
