// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WaypointAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaypointAgent() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointAgent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointAgent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWaypointAgent::StaticRegisterNativesAWaypointAgent()
	{
	}
	UClass* Z_Construct_UClass_AWaypointAgent_NoRegister()
	{
		return AWaypointAgent::StaticClass();
	}
	UClass* Z_Construct_UClass_AWaypointAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WaypointAgent.h" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointManager_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaypointManager = { UE4CodeGen_Private::EPropertyClass::Object, "WaypointManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, WaypointManager), Z_Construct_UClass_AWaypointManager_NoRegister, METADATA_PARAMS(NewProp_WaypointManager_MetaData, ARRAY_COUNT(NewProp_WaypointManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "The waypoint where the actor is moving towards" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "TargetWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, TargetWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_TargetWaypoint_MetaData, ARRAY_COUNT(NewProp_TargetWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "The waypoint where the actor is currently at" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, CurrentWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_CurrentWaypoint_MetaData, ARRAY_COUNT(NewProp_CurrentWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "Destination of the Actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "EndWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, EndWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_EndWaypoint_MetaData, ARRAY_COUNT(NewProp_EndWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "Start place of the Actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "StartWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, StartWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_StartWaypoint_MetaData, ARRAY_COUNT(NewProp_StartWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaypointManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetWaypoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWaypoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndWaypoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartWaypoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWaypointAgent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWaypointAgent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaypointAgent, 731512064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypointAgent(Z_Construct_UClass_AWaypointAgent, &AWaypointAgent::StaticClass, TEXT("/Script/FPSGame"), TEXT("AWaypointAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypointAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
