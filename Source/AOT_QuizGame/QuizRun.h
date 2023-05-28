// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "User.h"
#include "SQL_Execution.h"

#include "QuizRun.generated.h"

using namespace std;
/**
 * 
 */


UCLASS()
class AOT_QUIZGAME_API UQuizRun : public UUserWidget
{
	GENERATED_BODY()
public:	

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void startQuiz(FString lvl);

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void getQuestion();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void addAnswer(UButton* btnChoice);

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void removeAnswer();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		int checkAnswers();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void addImages(TArray<UTexture2D*> arr);

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void resetQuiz();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void reviewQuestion();
		
		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		float getScore();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void addResults(float s, int p);

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
		void setGameUser(FString userID,FString name,int points, TArray<float> scoreRecord);

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
			FString getID();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
			int getUserPoints();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
			FString getUserName();

		UFUNCTION(BlueprintCallable, Category = "Quiz_Functions")
			TArray<float> getScoreRecord();

private:
	void setQuestionList();
	void setLevelOne(TArray<FText> question);
	void setLevelTwo(TArray<FText> question);
	void setLevelThree(TArray<FText> question);
	void shuffleOptions(TArray<FText>& TextArray, int start, int end);
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtOption1;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtOption2;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtOption3;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtQuestion;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtScore;

	UPROPERTY(meta = (BindWidget))
		UImage* imgOpt1;
	UPROPERTY(meta = (BindWidget))
		UImage* imgOpt2;
	UPROPERTY(meta = (BindWidget))
		UImage* imgOpt3;

	TArray< TArray<FText> > questionList;
	TArray<FText> correctAns;
	TArray<FText> answers;
	TArray<UTexture2D*> imgArray;

	int questNum=-1;
	float score = 0.0;
	FString level = "0";

	User player;

};

class Points {

private:
	int value;
	FString lvl;

public:
	Points(FString& l) :value(0), lvl(l) {
	}

	void operator++() {
		if (lvl.Equals("1")) {
			value += 1;
		}
		else if (lvl.Equals("2")) {
			value += 2;
		}
		else if (lvl.Equals("3")) {
			value += 3;
		}
	}

	int getValue() {
		return value;
	}
};