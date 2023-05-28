// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuizRun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
class UTexture2D;
#ifdef AOT_QUIZGAME_QuizRun_generated_h
#error "QuizRun.generated.h already included, missing '#pragma once' in QuizRun.h"
#endif
#define AOT_QUIZGAME_QuizRun_generated_h

#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_SPARSE_DATA
#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetScoreRecord); \
	DECLARE_FUNCTION(execgetUserName); \
	DECLARE_FUNCTION(execgetUserPoints); \
	DECLARE_FUNCTION(execgetID); \
	DECLARE_FUNCTION(execsetGameUser); \
	DECLARE_FUNCTION(execaddResults); \
	DECLARE_FUNCTION(execgetScore); \
	DECLARE_FUNCTION(execreviewQuestion); \
	DECLARE_FUNCTION(execresetQuiz); \
	DECLARE_FUNCTION(execaddImages); \
	DECLARE_FUNCTION(execcheckAnswers); \
	DECLARE_FUNCTION(execremoveAnswer); \
	DECLARE_FUNCTION(execaddAnswer); \
	DECLARE_FUNCTION(execgetQuestion); \
	DECLARE_FUNCTION(execstartQuiz);


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetScoreRecord); \
	DECLARE_FUNCTION(execgetUserName); \
	DECLARE_FUNCTION(execgetUserPoints); \
	DECLARE_FUNCTION(execgetID); \
	DECLARE_FUNCTION(execsetGameUser); \
	DECLARE_FUNCTION(execaddResults); \
	DECLARE_FUNCTION(execgetScore); \
	DECLARE_FUNCTION(execreviewQuestion); \
	DECLARE_FUNCTION(execresetQuiz); \
	DECLARE_FUNCTION(execaddImages); \
	DECLARE_FUNCTION(execcheckAnswers); \
	DECLARE_FUNCTION(execremoveAnswer); \
	DECLARE_FUNCTION(execaddAnswer); \
	DECLARE_FUNCTION(execgetQuestion); \
	DECLARE_FUNCTION(execstartQuiz);


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_ACCESSORS
#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuizRun(); \
	friend struct Z_Construct_UClass_UQuizRun_Statics; \
public: \
	DECLARE_CLASS(UQuizRun, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AOT_QuizGame"), NO_API) \
	DECLARE_SERIALIZER(UQuizRun)


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUQuizRun(); \
	friend struct Z_Construct_UClass_UQuizRun_Statics; \
public: \
	DECLARE_CLASS(UQuizRun, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AOT_QuizGame"), NO_API) \
	DECLARE_SERIALIZER(UQuizRun)


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuizRun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuizRun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuizRun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuizRun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuizRun(UQuizRun&&); \
	NO_API UQuizRun(const UQuizRun&); \
public: \
	NO_API virtual ~UQuizRun();


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuizRun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuizRun(UQuizRun&&); \
	NO_API UQuizRun(const UQuizRun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuizRun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuizRun); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuizRun) \
	NO_API virtual ~UQuizRun();


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_22_PROLOG
#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_SPARSE_DATA \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_RPC_WRAPPERS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_ACCESSORS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_INCLASS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_SPARSE_DATA \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_ACCESSORS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AOT_QUIZGAME_API UClass* StaticClass<class UQuizRun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pasca_Documents_Unreal_Projects_AOT_QuizGame_Source_AOT_QuizGame_QuizRun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
