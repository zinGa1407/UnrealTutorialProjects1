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
	FPSGAME_API UFunction* Z_Construct_UFunction_AWaypointAgent_MoveActorToNextNode();
	FPSGAME_API UFunction* Z_Construct_UFunction_AWaypointAgent_PrintTimer();
	FPSGAME_API UFunction* Z_Construct_UFunction_AWaypointAgent_StartAgent();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointManager_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWaypointNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AWaypointAgent_PrintTimer = FName(TEXT("PrintTimer"));
	void AWaypointAgent::PrintTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWaypointAgent_PrintTimer),NULL);
	}
	void AWaypointAgent::StaticRegisterNativesAWaypointAgent()
	{
		UClass* Class = AWaypointAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveActorToNextNode", (Native)&AWaypointAgent::execMoveActorToNextNode },
			{ "StartAgent", (Native)&AWaypointAgent::execStartAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWaypointAgent_MoveActorToNextNode()
	{
		struct WaypointAgent_eventMoveActorToNextNode_Parms
		{
			float DeltaTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WaypointAgent_eventMoveActorToNextNode_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypointAgent, "MoveActorToNextNode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(WaypointAgent_eventMoveActorToNextNode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaypointAgent_PrintTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Timer" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "The waypoint manager in the level" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypointAgent, "PrintTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaypointAgent_StartAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypointAgent, "StartAgent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWaypointAgent_MoveActorToNextNode, "MoveActorToNextNode" }, // 3727766995
				{ &Z_Construct_UFunction_AWaypointAgent_PrintTimer, "PrintTimer" }, // 4203899394
				{ &Z_Construct_UFunction_AWaypointAgent_StartAgent, "StartAgent" }, // 908851467
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
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "TargetWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, TargetWaypoint), Z_Construct_UClass_AWaypointNode_NoRegister, METADATA_PARAMS(NewProp_TargetWaypoint_MetaData, ARRAY_COUNT(NewProp_TargetWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "Destination of the Actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "EndWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020801, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, EndWaypoint), Z_Construct_UClass_AWaypointNode_NoRegister, METADATA_PARAMS(NewProp_EndWaypoint_MetaData, ARRAY_COUNT(NewProp_EndWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWaypoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/WaypointAgent.h" },
				{ "ToolTip", "Start place of the Actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "StartWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000805, 1, nullptr, STRUCT_OFFSET(AWaypointAgent, StartWaypoint), Z_Construct_UClass_AWaypointNode_NoRegister, METADATA_PARAMS(NewProp_StartWaypoint_MetaData, ARRAY_COUNT(NewProp_StartWaypoint_MetaData)) };
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
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AWaypointAgent, 4003812903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypointAgent(Z_Construct_UClass_AWaypointAgent, &AWaypointAgent::StaticClass, TEXT("/Script/FPSGame"), TEXT("AWaypointAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypointAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
