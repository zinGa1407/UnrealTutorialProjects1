// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_WaypointManager_generated_h
#error "WaypointManager.generated.h already included, missing '#pragma once' in WaypointManager.h"
#endif
#define FPSGAME_WaypointManager_generated_h

#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_RPC_WRAPPERS
#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypointManager(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointManager(); \
public: \
	DECLARE_CLASS(AWaypointManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWaypointManager(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointManager(); \
public: \
	DECLARE_CLASS(AWaypointManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypointManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypointManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointManager(AWaypointManager&&); \
	NO_API AWaypointManager(const AWaypointManager&); \
public:


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointManager(AWaypointManager&&); \
	NO_API AWaypointManager(const AWaypointManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypointManager)


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaypointsArray() { return STRUCT_OFFSET(AWaypointManager, WaypointsArray); }


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_WaypointManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_WaypointManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
