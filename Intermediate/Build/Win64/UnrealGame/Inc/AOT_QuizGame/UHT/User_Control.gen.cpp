// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOT_QuizGame/User_Control.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser_Control() {}
// Cross Module References
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_UUser_Control();
	AOT_QUIZGAME_API UClass* Z_Construct_UClass_UUser_Control_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AOT_QuizGame();
// End Cross Module References
	DEFINE_FUNCTION(UUser_Control::execdisplayBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->displayBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execsetPlayedUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userID);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_TARRAY(float,Z_Param_scoreRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setPlayedUser(Z_Param_userID,Z_Param_name,Z_Param_points,Z_Param_scoreRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execcheckJumbleAnswer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_answer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->checkJumbleAnswer(Z_Param_answer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execplayExtraGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->playExtraGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execgetScoreRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->getScoreRecord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execgetUserName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getUserName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execgetUserPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getUserPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execgetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execdisplayDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->displayDetails();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execcheckLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->checkLogin(Z_Param_UserID,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Control::execaddUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Surname);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addUser(Z_Param_Name,Z_Param_Surname,Z_Param_Password,Z_Param_Email);
		P_NATIVE_END;
	}
	void UUser_Control::StaticRegisterNativesUUser_Control()
	{
		UClass* Class = UUser_Control::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addUser", &UUser_Control::execaddUser },
			{ "checkJumbleAnswer", &UUser_Control::execcheckJumbleAnswer },
			{ "checkLogin", &UUser_Control::execcheckLogin },
			{ "displayBoard", &UUser_Control::execdisplayBoard },
			{ "displayDetails", &UUser_Control::execdisplayDetails },
			{ "getID", &UUser_Control::execgetID },
			{ "getScoreRecord", &UUser_Control::execgetScoreRecord },
			{ "getUserName", &UUser_Control::execgetUserName },
			{ "getUserPoints", &UUser_Control::execgetUserPoints },
			{ "playExtraGame", &UUser_Control::execplayExtraGame },
			{ "setPlayedUser", &UUser_Control::execsetPlayedUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_Control_addUser_Statics
	{
		struct User_Control_eventaddUser_Parms
		{
			FString Name;
			FString Surname;
			FString Password;
			FString Email;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Surname;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventaddUser_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Surname = { "Surname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventaddUser_Parms, Surname), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventaddUser_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventaddUser_Parms, Email), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_addUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Surname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_addUser_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_addUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_addUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "addUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_addUser_Statics::User_Control_eventaddUser_Parms), Z_Construct_UFunction_UUser_Control_addUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_addUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_addUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_addUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_addUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_addUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics
	{
		struct User_Control_eventcheckJumbleAnswer_Parms
		{
			FString answer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_answer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_answer = { "answer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventcheckJumbleAnswer_Parms, answer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_Control_eventcheckJumbleAnswer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_Control_eventcheckJumbleAnswer_Parms), &Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_answer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "checkJumbleAnswer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::User_Control_eventcheckJumbleAnswer_Parms), Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_checkJumbleAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_checkJumbleAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_checkLogin_Statics
	{
		struct User_Control_eventcheckLogin_Parms
		{
			FString UserID;
			FString Password;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventcheckLogin_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventcheckLogin_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_Control_eventcheckLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_Control_eventcheckLogin_Parms), &Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_checkLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_checkLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_checkLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_checkLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "checkLogin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_checkLogin_Statics::User_Control_eventcheckLogin_Parms), Z_Construct_UFunction_UUser_Control_checkLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_checkLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_checkLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_checkLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_checkLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_checkLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_displayBoard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_displayBoard_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_displayBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "displayBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_displayBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_displayBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_displayBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_displayBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_displayDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_displayDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_displayDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "displayDetails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_displayDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_displayDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_displayDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_displayDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_getID_Statics
	{
		struct User_Control_eventgetID_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_getID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventgetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_getID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_getID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_getID_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_getID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "getID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_getID_Statics::User_Control_eventgetID_Parms), Z_Construct_UFunction_UUser_Control_getID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_getID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_getID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_getID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics
	{
		struct User_Control_eventgetScoreRecord_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventgetScoreRecord_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "getScoreRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::User_Control_eventgetScoreRecord_Parms), Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_getScoreRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_getScoreRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_getUserName_Statics
	{
		struct User_Control_eventgetUserName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_getUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventgetUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_getUserName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_getUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_getUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_getUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "getUserName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_getUserName_Statics::User_Control_eventgetUserName_Parms), Z_Construct_UFunction_UUser_Control_getUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_getUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_getUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_getUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_getUserPoints_Statics
	{
		struct User_Control_eventgetUserPoints_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventgetUserPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "getUserPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::User_Control_eventgetUserPoints_Parms), Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_getUserPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_getUserPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_playExtraGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_playExtraGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_playExtraGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "playExtraGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_playExtraGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_playExtraGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_playExtraGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_playExtraGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics
	{
		struct User_Control_eventsetPlayedUser_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventsetPlayedUser_Parms, userID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventsetPlayedUser_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventsetPlayedUser_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_scoreRecord_Inner = { "scoreRecord", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_scoreRecord = { "scoreRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_Control_eventsetPlayedUser_Parms, scoreRecord), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_scoreRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::NewProp_scoreRecord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserControl_Functions" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Control, nullptr, "setPlayedUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::User_Control_eventsetPlayedUser_Parms), Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Control_setPlayedUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_Control_setPlayedUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUser_Control);
	UClass* Z_Construct_UClass_UUser_Control_NoRegister()
	{
		return UUser_Control::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Control_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtShowUserID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtShowUserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtInvalid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtWelcome_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtWelcome;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtTotalPoints_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtTotalPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtRecentAvg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtRecentAvg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtJumbledWord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtJumbledWord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txtCorrect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_txtCorrect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_medtRanks_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_medtRanks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Control_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AOT_QuizGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Control_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_Control_addUser, "addUser" }, // 3404533878
		{ &Z_Construct_UFunction_UUser_Control_checkJumbleAnswer, "checkJumbleAnswer" }, // 482901827
		{ &Z_Construct_UFunction_UUser_Control_checkLogin, "checkLogin" }, // 1810102740
		{ &Z_Construct_UFunction_UUser_Control_displayBoard, "displayBoard" }, // 1807440433
		{ &Z_Construct_UFunction_UUser_Control_displayDetails, "displayDetails" }, // 1577666362
		{ &Z_Construct_UFunction_UUser_Control_getID, "getID" }, // 1202894368
		{ &Z_Construct_UFunction_UUser_Control_getScoreRecord, "getScoreRecord" }, // 2066735692
		{ &Z_Construct_UFunction_UUser_Control_getUserName, "getUserName" }, // 2532658731
		{ &Z_Construct_UFunction_UUser_Control_getUserPoints, "getUserPoints" }, // 1739906133
		{ &Z_Construct_UFunction_UUser_Control_playExtraGame, "playExtraGame" }, // 1391840846
		{ &Z_Construct_UFunction_UUser_Control_setPlayedUser, "setPlayedUser" }, // 4145174323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "User_Control.h" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtShowUserID_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtShowUserID = { "txtShowUserID", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtShowUserID), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtShowUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtShowUserID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtInvalid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtInvalid = { "txtInvalid", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtInvalid), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtInvalid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtInvalid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtWelcome_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtWelcome = { "txtWelcome", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtWelcome), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtWelcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtWelcome_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtTotalPoints_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtTotalPoints = { "txtTotalPoints", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtTotalPoints), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtTotalPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtTotalPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtRecentAvg_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtRecentAvg = { "txtRecentAvg", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtRecentAvg), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtRecentAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtRecentAvg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtJumbledWord_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtJumbledWord = { "txtJumbledWord", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtJumbledWord), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtJumbledWord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtJumbledWord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_txtCorrect_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_txtCorrect = { "txtCorrect", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, txtCorrect), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_txtCorrect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Control_Statics::NewProp_medtRanks_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Control.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Control_Statics::NewProp_medtRanks = { "medtRanks", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser_Control, medtRanks), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::NewProp_medtRanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::NewProp_medtRanks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUser_Control_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtShowUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtWelcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtTotalPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtRecentAvg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtJumbledWord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_txtCorrect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Control_Statics::NewProp_medtRanks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Control_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser_Control>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUser_Control_Statics::ClassParams = {
		&UUser_Control::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUser_Control_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Control_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Control_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser_Control()
	{
		if (!Z_Registration_Info_UClass_UUser_Control.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUser_Control.OuterSingleton, Z_Construct_UClass_UUser_Control_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUser_Control.OuterSingleton;
	}
	template<> AOT_QUIZGAME_API UClass* StaticClass<UUser_Control>()
	{
		return UUser_Control::StaticClass();
	}
	UUser_Control::UUser_Control(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser_Control);
	UUser_Control::~UUser_Control() {}
	struct Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_User_Control_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_User_Control_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUser_Control, UUser_Control::StaticClass, TEXT("UUser_Control"), &Z_Registration_Info_UClass_UUser_Control, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUser_Control), 2849913525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_User_Control_h_916976755(TEXT("/Script/AOT_QuizGame"),
		Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_User_Control_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_User_Control_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
