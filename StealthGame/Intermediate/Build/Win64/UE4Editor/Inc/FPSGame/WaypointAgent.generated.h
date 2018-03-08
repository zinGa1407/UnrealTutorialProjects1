// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_WaypointAgent_generated_h
#error "WaypointAgent.generated.h already included, missing '#pragma once' in WaypointAgent.h"
#endif
#define FPSGAME_WaypointAgent_generated_h

#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_RPC_WRAPPERS
#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypointAgent(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointAgent(); \
public: \
	DECLARE_CLASS(AWaypointAgent, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointAgent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWaypointAgent(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointAgent(); \
public: \
	DECLARE_CLASS(AWaypointAgent, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointAgent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypointAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypointAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointAgent(AWaypointAgent&&); \
	NO_API AWaypointAgent(const AWaypointAgent&); \
public:


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointAgent(AWaypointAgent&&); \
	NO_API AWaypointAgent(const AWaypointAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypointAgent)


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AWaypointAgent, MeshComp); } \
	FORCEINLINE static uint32 __PPO__StartWaypoint() { return STRUCT_OFFSET(AWaypointAgent, StartWaypoint); } \
	FORCEINLINE static uint32 __PPO__EndWaypoint() { return STRUCT_OFFSET(AWaypointAgent, EndWaypoint); } \
	FORCEINLINE static uint32 __PPO__CurrentWaypoint() { return STRUCT_OFFSET(AWaypointAgent, CurrentWaypoint); } \
	FORCEINLINE static uint32 __PPO__TargettWaypoint() { return STRUCT_OFFSET(AWaypointAgent, TargettWaypoint); }


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointAgent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_WaypointAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
