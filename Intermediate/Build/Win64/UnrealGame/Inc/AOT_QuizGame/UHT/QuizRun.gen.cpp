// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOT_QuizGame/QuizRun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuizRun() {}
// Cross Module References
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_UQuizRun();
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_UQuizRun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AOT_QuizGame();
// End Cross Module References
	DEFINE_FUNCTION(UQuizRun::execgetScoreRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->getScoreRecord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execgetUserName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getUserName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execgetUserPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getUserPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execgetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execsetGameUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userID);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_TARRAY(float,Z_Param_scoreRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setGameUser(Z_Param_userID,Z_Param_name,Z_Param_points,Z_Param_scoreRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execaddResults)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_s);
		P_GET_PROPERTY(FIntProperty,Z_Param_p);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addResults(Z_Param_s,Z_Param_p);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execgetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execreviewQuestion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->reviewQuestion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execresetQuiz)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetQuiz();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execaddImages)
	{
		P_GET_TARRAY(UTexture2D*,Z_Param_arr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addImages(Z_Param_arr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execcheckAnswers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->checkAnswers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execremoveAnswer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->removeAnswer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execaddAnswer)
	{
		P_GET_OBJECT(UButton,Z_Param_btnChoice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addAnswer(Z_Param_btnChoice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execgetQuestion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->getQuestion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuizRun::execstartQuiz)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_lvl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startQuiz(Z_Param_lvl);
		P_NATIVE_END;
	}
	void UQuizRun::StaticRegisterNativesUQuizRun()
	{
		UClass* Class = UQuizRun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addAnswer", &UQuizRun::execaddAnswer },
			{ "addImages", &UQuizRun::execaddImages },
			{ "addResults", &UQuizRun::execaddResults },
			{ "checkAnswers", &UQuizRun::execcheckAnswers },
			{ "getID", &UQuizRun::execgetID },
			{ "getQuestion", &UQuizRun::execgetQuestion },
			{ "getScore", &UQuizRun::execgetScore },
			{ "getScoreRecord", &UQuizRun::execgetScoreRecord },
			{ "getUserName", &UQuizRun::execgetUserName },
			{ "getUserPoints", &UQuizRun::execgetUserPoints },
			{ "removeAnswer", &UQuizRun::execremoveAnswer },
			{ "resetQuiz", &UQuizRun::execresetQuiz },
			{ "reviewQuestion", &UQuizRun::execreviewQuestion },
			{ "setGameUser", &UQuizRun::execsetGameUser },
			{ "startQuiz", &UQuizRun::execstartQuiz },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuizRun_addAnswer_Statics
	{
		struct QuizRun_eventaddAnswer_Parms
		{
			UButton* btnChoice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btnChoice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btnChoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_addAnswer_Statics::NewProp_btnChoice_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuizRun_addAnswer_Statics::NewProp_btnChoice = { "btnChoice", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventaddAnswer_Parms, btnChoice), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::NewProp_btnChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::NewProp_btnChoice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_addAnswer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_addAnswer_Statics::NewProp_btnChoice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_addAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_addAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "addAnswer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::QuizRun_eventaddAnswer_Parms), Z_Construct_UFunction_UQuizRun_addAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_addAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_addAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_addImages_Statics
	{
		struct QuizRun_eventaddImages_Parms
		{
			TArray<UTexture2D*> arr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_arr_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuizRun_addImages_Statics::NewProp_arr_Inner = { "arr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuizRun_addImages_Statics::NewProp_arr = { "arr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventaddImages_Parms, arr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_addImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_addImages_Statics::NewProp_arr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_addImages_Statics::NewProp_arr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_addImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_addImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "addImages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_addImages_Statics::QuizRun_eventaddImages_Parms), Z_Construct_UFunction_UQuizRun_addImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_addImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_addImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_addImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_addResults_Statics
	{
		struct QuizRun_eventaddResults_Parms
		{
			float s;
			int32 p;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_p;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuizRun_addResults_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventaddResults_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuizRun_addResults_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventaddResults_Parms, p), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_addResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_addResults_Statics::NewProp_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_addResults_Statics::NewProp_p,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_addResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_addResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "addResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_addResults_Statics::QuizRun_eventaddResults_Parms), Z_Construct_UFunction_UQuizRun_addResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_addResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_addResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_addResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_addResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_checkAnswers_Statics
	{
		struct QuizRun_eventcheckAnswers_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventcheckAnswers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "checkAnswers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::QuizRun_eventcheckAnswers_Parms), Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_checkAnswers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_checkAnswers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getID_Statics
	{
		struct QuizRun_eventgetID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuizRun_getID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventgetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_getID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_getID_Statics::QuizRun_eventgetID_Parms), Z_Construct_UFunction_UQuizRun_getID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getQuestion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getQuestion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getQuestion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getQuestion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getQuestion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getQuestion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getQuestion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getQuestion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getScore_Statics
	{
		struct QuizRun_eventgetScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuizRun_getScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventgetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_getScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_getScore_Statics::QuizRun_eventgetScore_Parms), Z_Construct_UFunction_UQuizRun_getScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics
	{
		struct QuizRun_eventgetScoreRecord_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventgetScoreRecord_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getScoreRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::QuizRun_eventgetScoreRecord_Parms), Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getScoreRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getScoreRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getUserName_Statics
	{
		struct QuizRun_eventgetUserName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuizRun_getUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventgetUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_getUserName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getUserName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_getUserName_Statics::QuizRun_eventgetUserName_Parms), Z_Construct_UFunction_UQuizRun_getUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_getUserPoints_Statics
	{
		struct QuizRun_eventgetUserPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventgetUserPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "getUserPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::QuizRun_eventgetUserPoints_Parms), Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_getUserPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_getUserPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_removeAnswer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_removeAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_removeAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "removeAnswer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_removeAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_removeAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_removeAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_removeAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_resetQuiz_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_resetQuiz_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_resetQuiz_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "resetQuiz", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_resetQuiz_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_resetQuiz_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_resetQuiz()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_resetQuiz_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "reviewQuestion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_reviewQuestion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_reviewQuestion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_setGameUser_Statics
	{
		struct QuizRun_eventsetGameUser_Parms
		{
			FString userID;
			FString name;
			int32 points;
			TArray<float> scoreRecord;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_userID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scoreRecord_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_scoreRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventsetGameUser_Parms, userID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventsetGameUser_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventsetGameUser_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_scoreRecord_Inner = { "scoreRecord", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_scoreRecord = { "scoreRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventsetGameUser_Parms, scoreRecord), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_setGameUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_scoreRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_setGameUser_Statics::NewProp_scoreRecord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_setGameUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_setGameUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "setGameUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_setGameUser_Statics::QuizRun_eventsetGameUser_Parms), Z_Construct_UFunction_UQuizRun_setGameUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_setGameUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_setGameUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_setGameUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_setGameUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_setGameUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuizRun_startQuiz_Statics
	{
		struct QuizRun_eventstartQuiz_Parms
		{
			FString lvl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_lvl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuizRun_startQuiz_Statics::NewProp_lvl = { "lvl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuizRun_eventstartQuiz_Parms, lvl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuizRun_startQuiz_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuizRun_startQuiz_Statics::NewProp_lvl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuizRun_startQuiz_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quiz_Functions" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuizRun_startQuiz_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuizRun, nullptr, "startQuiz", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuizRun_startQuiz_Statics::QuizRun_eventstartQuiz_Parms), Z_Construct_UFunction_UQuizRun_startQuiz_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_startQuiz_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuizRun_startQuiz_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuizRun_startQuiz_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuizRun_startQuiz()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuizRun_startQuiz_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuizRun);
	UClass* Z_Construct_UClass_UQuizRun_NoRegister()
	{
		return UQuizRun::StaticClass();
	}
	struct Z_Construct_UClass_UQuizRun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtOption1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtOption1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtOption2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtOption2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtOption3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtOption3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtQuestion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtQuestion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtScore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imgOpt1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imgOpt1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imgOpt2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imgOpt2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imgOpt3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imgOpt3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuizRun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AOT_QuizGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuizRun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuizRun_addAnswer, "addAnswer" }, // 998681849
		{ &Z_Construct_UFunction_UQuizRun_addImages, "addImages" }, // 293717425
		{ &Z_Construct_UFunction_UQuizRun_addResults, "addResults" }, // 4379795
		{ &Z_Construct_UFunction_UQuizRun_checkAnswers, "checkAnswers" }, // 742179102
		{ &Z_Construct_UFunction_UQuizRun_getID, "getID" }, // 4246996514
		{ &Z_Construct_UFunction_UQuizRun_getQuestion, "getQuestion" }, // 4193893298
		{ &Z_Construct_UFunction_UQuizRun_getScore, "getScore" }, // 3694860301
		{ &Z_Construct_UFunction_UQuizRun_getScoreRecord, "getScoreRecord" }, // 3073998199
		{ &Z_Construct_UFunction_UQuizRun_getUserName, "getUserName" }, // 1131989860
		{ &Z_Construct_UFunction_UQuizRun_getUserPoints, "getUserPoints" }, // 2293647103
		{ &Z_Construct_UFunction_UQuizRun_removeAnswer, "removeAnswer" }, // 591750148
		{ &Z_Construct_UFunction_UQuizRun_resetQuiz, "resetQuiz" }, // 3238079490
		{ &Z_Construct_UFunction_UQuizRun_reviewQuestion, "reviewQuestion" }, // 318819786
		{ &Z_Construct_UFunction_UQuizRun_setGameUser, "setGameUser" }, // 1484620067
		{ &Z_Construct_UFunction_UQuizRun_startQuiz, "startQuiz" }, // 258285217
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuizRun.h" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption1 = { "txtOption1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, txtOption1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption2 = { "txtOption2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, txtOption2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption3 = { "txtOption3", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, txtOption3), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_txtQuestion_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_txtQuestion = { "txtQuestion", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, txtQuestion), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtQuestion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_txtScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_txtScore = { "txtScore", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, txtScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_txtScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt1 = { "imgOpt1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, imgOpt1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt2 = { "imgOpt2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, imgOpt2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuizRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt3 = { "imgOpt3", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuizRun, imgOpt3), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuizRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_txtOption3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_txtQuestion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_txtScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuizRun_Statics::NewProp_imgOpt3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuizRun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuizRun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuizRun_Statics::ClassParams = {
		&UQuizRun::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuizRun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuizRun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuizRun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuizRun()
	{
		if (!Z_Registration_Info_UClass_UQuizRun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuizRun.OuterSingleton, Z_Construct_UClass_UQuizRun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuizRun.OuterSingleton;
	}
	template<> AOT_QUIZGAME_API UClass* StaticClass<UQuizRun>()
	{
		return UQuizRun::StaticClass();
	}
	UQuizRun::UQuizRun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuizRun);
	UQuizRun::~UQuizRun() {}
	struct Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuizRun, UQuizRun::StaticClass, TEXT("UQuizRun"), &Z_Registration_Info_UClass_UQuizRun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuizRun), 841160368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_17957008(TEXT("/Script/AOT_QuizGame"),
		Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
