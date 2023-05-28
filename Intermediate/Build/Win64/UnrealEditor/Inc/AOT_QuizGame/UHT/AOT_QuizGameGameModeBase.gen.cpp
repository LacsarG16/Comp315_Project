// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOT_QuizGame/AOT_QuizGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOT_QuizGameGameModeBase() {}
// Cross Module References
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_AAOT_QuizGameGameModeBase();
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_AAOT_QuizGameGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AOT_QuizGame();
// End Cross Module References
	void AAOT_QuizGameGameModeBase::StaticRegisterNativesAAOT_QuizGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAOT_QuizGameGameModeBase);
	UClass* Z_Construct_UClass_AAOT_QuizGameGameModeBase_NoRegister()
	{
		return AAOT_QuizGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AOT_QuizGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AOT_QuizGameGameModeBase.h" },
		{ "ModuleRelativePath", "AOT_QuizGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOT_QuizGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::ClassParams = {
		&AAOT_QuizGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOT_QuizGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAOT_QuizGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAOT_QuizGameGameModeBase.OuterSingleton, Z_Construct_UClass_AAOT_QuizGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAOT_QuizGameGameModeBase.OuterSingleton;
	}
	template<> AOT_QUIZGAME_API UClass* StaticClass<AAOT_QuizGameGameModeBase>()
	{
		return AAOT_QuizGameGameModeBase::StaticClass();
	}
	AAOT_QuizGameGameModeBase::AAOT_QuizGameGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOT_QuizGameGameModeBase);
	AAOT_QuizGameGameModeBase::~AAOT_QuizGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_AOT_QuizGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_AOT_QuizGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAOT_QuizGameGameModeBase, AAOT_QuizGameGameModeBase::StaticClass, TEXT("AAOT_QuizGameGameModeBase"), &Z_Registration_Info_UClass_AAOT_QuizGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAOT_QuizGameGameModeBase), 2608107000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_AOT_QuizGameGameModeBase_h_3076141444(TEXT("/Script/AOT_QuizGame"),
		Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_AOT_QuizGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_AOT_QuizGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
