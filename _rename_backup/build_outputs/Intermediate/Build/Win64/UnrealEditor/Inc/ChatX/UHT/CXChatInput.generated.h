// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CXChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXChatInput_generated_h
#error "CXChatInput.generated.h already included, missing '#pragma once' in CXChatInput.h"
#endif
#define CHATX_CXChatInput_generated_h

#define FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXChatInput(); \
	friend struct Z_Construct_UClass_UCXChatInput_Statics; \
public: \
	DECLARE_CLASS(UCXChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(UCXChatInput)


#define FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCXChatInput(UCXChatInput&&); \
	UCXChatInput(const UCXChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXChatInput) \
	NO_API virtual ~UCXChatInput();


#define FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_16_PROLOG
#define FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class UCXChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_ChatX_Source_ChatX_UI_CXChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
