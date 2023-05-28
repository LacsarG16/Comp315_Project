// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/MultiLineEditableTextBox.h"
#include "User.h"
#include "SQL_Execution.h"
#include "JumbleWord.h"
#include "Internationalization/Regex.h"
#include "User_Control.generated.h"

using namespace std;
/**
 * 
 */

UCLASS()
class AOT_QUIZGAME_API UUser_Control : public UUserWidget
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
	void addUser(FString Name, FString Surname, FString Password, FString Email);

	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
	bool checkLogin(FString UserID, FString Password);

	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
	void displayDetails();

	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
		FString getID();

	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
		int getUserPoints();

	UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
		FString getUserName();

    UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
       TArray<float> getScoreRecord();

    UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
        void playExtraGame();

    UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
        bool checkJumbleAnswer(FString answer);

    UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
     void setPlayedUser(FString userID, FString name, int points, TArray<float> scoreRecord);


    UFUNCTION(BlueprintCallable, Category = "UserControl_Functions")
        void displayBoard();

public:
	
	FString createUserID(FString n,FString s);
	
private:
    User player;
    FString originalWord;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtShowUserID;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* txtInvalid;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* txtWelcome;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* txtTotalPoints;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* txtRecentAvg;

    UPROPERTY(meta = (BindWidget))
        UTextBlock* txtJumbledWord;

    UPROPERTY(meta = (BindWidget))
        UTextBlock* txtCorrect;

    UPROPERTY(meta = (BindWidget))
        UMultiLineEditableTextBox* medtRanks;


};

template<typename T>
class Authentication {
private:
    T verification;

public:
    Authentication(const T& verification) {
        this->verification = verification;
    }

    ~Authentication() {
    }

    bool isInteger() const {
        // Check if verification is an integer
        if constexpr (std::is_same_v<T, FString>) {
            int32 ConvertedValue = FCString::Atoi(*verification);
            FString ConvertedString = FString::FromInt(ConvertedValue);
            return ConvertedString == verification;
        }
        return false;
    }

    bool isLetters() const {
        // Check if verification contains only letters
        if constexpr (std::is_same_v<T, FString>) {
            const TCHAR* Chars = *verification;
            for (int32 Index = 0; Index < verification.Len(); ++Index) {
                if (!FChar::IsAlpha(Chars[Index])) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    bool isEmail() const {
        // Check if verification is a valid email address
        if constexpr (std::is_same_v<T, FString>) {
            const FString EmailRegexPattern = TEXT("^\\S+@\\S+\\.\\S+$");
            FRegexPattern Pattern(EmailRegexPattern);
            FRegexMatcher EmailRegexMatcher(Pattern, verification);
            return EmailRegexMatcher.FindNext();
        }
        return false;
    }
};
