// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WaypointNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaypointNode() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointNode_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void AWaypointNode::StaticRegisterNativesAWaypointNode()
	{
	}
	UClass* Z_Construct_UClass_AWaypointNode_NoRegister()
	{
		return AWaypointNode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWaypointNode()
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
				{ "IncludePath", "WaypointNode.h" },
				{ "ModuleRelativePath", "Public/WaypointNode.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbouringWaypoints_MetaData[] = {
				{ "Category", "Waypoints" },
				{ "ModuleRelativePath", "Public/WaypointNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeighbouringWaypoints = { UE4CodeGen_Private::EPropertyClass::Array, "NeighbouringWaypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWaypointNode, NeighbouringWaypoints), METADATA_PARAMS(NewProp_NeighbouringWaypoints_MetaData, ARRAY_COUNT(NewProp_NeighbouringWaypoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeighbouringWaypoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NeighbouringWaypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AWaypointNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponents_MetaData[] = {
				{ "Category", "Indicators" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WaypointNode.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Components\")\nUSphereComponent * SphereComp;" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrowComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ArrowComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008800003000d, 1, nullptr, STRUCT_OFFSET(AWaypointNode, ArrowComponents), METADATA_PARAMS(NewProp_ArrowComponents_MetaData, ARRAY_COUNT(NewProp_ArrowComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x00000000000a0008, 1, nullptr, 0, Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeighbouringWaypoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeighbouringWaypoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWaypointNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWaypointNode::StaticClass,
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
	IMPLEMENT_CLASS(AWaypointNode, 3851256074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypointNode(Z_Construct_UClass_AWaypointNode, &AWaypointNode::StaticClass, TEXT("/Script/FPSGame"), TEXT("AWaypointNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypointNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
