// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_WaypointNode_generated_h
#error "WaypointNode.generated.h already included, missing '#pragma once' in WaypointNode.h"
#endif
#define FPSGAME_WaypointNode_generated_h

#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_RPC_WRAPPERS
#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypointNode(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointNode(); \
public: \
	DECLARE_CLASS(AWaypointNode, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointNode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWaypointNode(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AWaypointNode(); \
public: \
	DECLARE_CLASS(AWaypointNode, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWaypointNode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypointNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypointNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointNode(AWaypointNode&&); \
	NO_API AWaypointNode(const AWaypointNode&); \
public:


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypointNode(AWaypointNode&&); \
	NO_API AWaypointNode(const AWaypointNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypointNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypointNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypointNode)


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArrowComponents() { return STRUCT_OFFSET(AWaypointNode, ArrowComponents); }


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_12_PROLOG
#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_INCLASS \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_WaypointNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_WaypointNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_WaypointNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
