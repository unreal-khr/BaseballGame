// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CXPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXPlayerController_generated_h
#error "CXPlayerController.generated.h already included, missing '#pragma once' in CXPlayerController.h"
#endif
#define CHATX_CXPlayerController_generated_h

#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessagaString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_CALLBACK_WRAPPERS
#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerController(); \
	friend struct Z_Construct_UClass_ACXPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerController(ACXPlayerController&&); \
	ACXPlayerController(const ACXPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXPlayerController) \
	NO_API virtual ~ACXPlayerController();


#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_17_PROLOG
#define FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_CALLBACK_WRAPPERS \
	FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_ChatX_Source_ChatX_Player_CXPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
