// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WaypointManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaypointManager() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointManager_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AWaypointManager::StaticRegisterNativesAWaypointManager()
	{
	}
	UClass* Z_Construct_UClass_AWaypointManager_NoRegister()
	{
		return AWaypointManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AWaypointManager()
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
				{ "IncludePath", "WaypointManager.h" },
				{ "ModuleRelativePath", "Public/WaypointManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointsArray_MetaData[] = {
				{ "Category", "Waypoints" },
				{ "ModuleRelativePath", "Public/WaypointManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaypointsArray = { UE4CodeGen_Private::EPropertyClass::Array, "WaypointsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AWaypointManager, WaypointsArray), METADATA_PARAMS(NewProp_WaypointsArray_MetaData, ARRAY_COUNT(NewProp_WaypointsArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaypointsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "WaypointsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaypointsArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaypointsArray_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWaypointManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWaypointManager::StaticClass,
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
	IMPLEMENT_CLASS(AWaypointManager, 1037872592);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypointManager(Z_Construct_UClass_AWaypointManager, &AWaypointManager::StaticClass, TEXT("/Script/FPSGame"), TEXT("AWaypointManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypointManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
