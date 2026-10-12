// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/CXGameHelperLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXGameHelperLibrary_generated_h
#error "CXGameHelperLibrary.generated.h already included, missing '#pragma once' in CXGameHelperLibrary.h"
#endif
#define CHATX_CXGameHelperLibrary_generated_h

#define FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsNumber); \
	DECLARE_FUNCTION(execHasDuplicateDigits);


#define FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXGameHelperLibrary(); \
	friend struct Z_Construct_UClass_UCXGameHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UCXGameHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(UCXGameHelperLibrary)


#define FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXGameHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCXGameHelperLibrary(UCXGameHelperLibrary&&); \
	UCXGameHelperLibrary(const UCXGameHelperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXGameHelperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXGameHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXGameHelperLibrary) \
	NO_API virtual ~UCXGameHelperLibrary();


#define FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_14_PROLOG
#define FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class UCXGameHelperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_ChatX_Source_ChatX_Helpers_CXGameHelperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
