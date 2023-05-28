// Fill out your copyright notice in the Description page of Project Settings.


#include "QuizRun.h"
#include <algorithm> // for std::random_shuffle
#include <random>    // for std::default_random_engine
#include <iostream>

#include <Engine/Texture2D.h>

//C: / Users / pasca / OneDrive / Documents / Unreal Projects / AOT_QuizGame / Content / Database / QuizDatabase.db


void UQuizRun::setQuestionList()
{
    TArray< TArray<FText> > arrText;
    const char* sql = "SELECT QuestID,Question,Answer,Option1,Option2 FROM Questions where Level=0";
    SQL_Execution dbCon;

    if (level.Equals("1")) {
        sql = "SELECT Question,Answer,Option1,Option2 FROM Questions where Level=1 order by RANDOM()";
    }else if (level.Equals("2")) {
        sql = "SELECT Question,Answer,Option1 FROM Questions where Level=2 ORDER BY RANDOM()";
    }else if (level.Equals("3")) {
        sql = "SELECT Question,Answer,Option1,Option2 FROM Questions where Level=3 ORDER BY RANDOM()";
    }
  
    questionList= dbCon.runSelect(sql);

    for (int i = 0; i < questionList.Num();i++) {
        answers.Add(FText::FromString(TEXT(" ")));
        correctAns.Add(questionList[i][1]);
    }

}

void UQuizRun::shuffleOptions(TArray<FText>& textArray,int start,int end)
{
    TArray<FText> shuffledArray;

    // Copy the first element to the new array
    shuffledArray.Add(textArray[0]);

    TArray<FText> ShuffledRange;
    for (int32 i = start; i <= end; ++i)
    {
        ShuffledRange.Add(textArray[i]);
    }
    ShuffledRange.Sort([](const FText& A, const FText& B) {
        return FMath::Rand() % 2 == 0; // Random order
        });
    shuffledArray.Append(ShuffledRange);

    // Add the remaining elements to the new array
    for (int32 i =end + 1; i < textArray.Num(); ++i)
    {
        shuffledArray.Add(textArray[i]);
    }
    textArray = shuffledArray;
    
}

void UQuizRun::addAnswer(UButton* btnChoice)
{
    UTextBlock* txtAnswer = Cast<UTextBlock>(btnChoice->GetChildAt(0));
    answers[questNum] = txtAnswer->GetText();
 
}

void UQuizRun::removeAnswer()
{
    answers[questNum] = FText::FromString(TEXT(" "));
}

int UQuizRun::checkAnswers()
{
    questNum = -1;
    score = 0.0;
    Points p(level);
    for (int i = 0; i < questionList.Num(); i++) {
        if (answers[i].EqualTo(correctAns[i])) {
            score++;
            ++p;
      }
    }
    
    FString stringScore = FString::Printf(TEXT("%.0f"), (score / questionList.Num())*100) + "%"; 
    txtScore->SetText(FText::FromString(stringScore));

    txtQuestion->SetText(FText::FromString("YOU SCORED:"));
    txtScore->SetVisibility(ESlateVisibility::Visible);

    player.recordScore((score / questionList.Num()) * 100);

    return p.getValue();
}

void UQuizRun::startQuiz(FString lvl)
{
    this->level = lvl;
    setQuestionList();
    getQuestion();
    txtQuestion->SetVisibility(ESlateVisibility::Visible);
   
}

void UQuizRun::addImages(TArray<UTexture2D*> arr)
{
    this->imgArray = arr;
}

void UQuizRun::resetQuiz()
{
    txtQuestion->SetText(FText::FromString(""));
    txtOption1->SetText(FText::FromString(""));
    txtOption2->SetText(FText::FromString(""));
    txtOption3->SetText(FText::FromString(""));

    questNum = -1;
    score = 0.0;
    level = "0";

    answers.Reset();
    correctAns.Reset();
    imgArray.Reset();
    txtScore->SetVisibility(ESlateVisibility::Hidden);
    txtQuestion->SetVisibility(ESlateVisibility::Hidden);
}
 
void UQuizRun::reviewQuestion()
{
    TArray<FText> question;
    TArray<FText> result;
    questNum++;
    
    if (questNum < 0 || questNum >= questionList.Num()) {
        questNum = 0;
    }

    question = questionList[questNum];
    bool checkCorrect = answers[questNum].EqualTo(correctAns[questNum]);
    txtQuestion->SetVisibility(ESlateVisibility::Visible);

    if (level.Equals("1")) {
        setLevelOne(question);
         
        if (txtOption1->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(imgOpt1->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }
        else if (txtOption2->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(imgOpt2->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }
        else if (txtOption3->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(imgOpt3->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }

        if (checkCorrect ==false) {
            if (txtOption1->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(imgOpt1->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
            else if (txtOption2->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(imgOpt2->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
            else if (txtOption3->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(imgOpt3->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
        }
    }
    else if (level.Equals("2")) {
        setLevelTwo(question);

         if (txtOption2->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(txtOption2->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);

        }else if (txtOption3->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(txtOption3->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }
        if (checkCorrect == false) {
            if (txtOption2->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(txtOption2->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
            else if (txtOption3->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(txtOption3->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
        }
    }
    else if (level.Equals("3")) {
        setLevelThree(question);

        if (txtOption1->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(txtOption1->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }
        else if (txtOption2->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(txtOption2->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }
        else if (txtOption3->GetText().EqualTo(correctAns[questNum])) {
            UButton* b1 = Cast<UButton>(txtOption3->GetParent());
            b1->SetBackgroundColor(FLinearColor::Green);
        }

        if (checkCorrect == false) {
            if (txtOption1->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(txtOption1->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
            else if (txtOption2->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(txtOption2->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
            else if (txtOption3->GetText().EqualTo(answers[questNum])) {
                UButton* b1 = Cast<UButton>(txtOption3->GetParent());
                b1->SetBackgroundColor(FLinearColor::Red);
            }
        }
    }

}

float UQuizRun::getScore()
{
    return score;
}

void UQuizRun::addResults(float s, int p)
{
    player.setPoints(p);
    int32_t newPoints = (static_cast<int32>(p));

    const char* sql = "UPDATE User_Details SET Points = ? WHERE UserID = ?";
    const TArray<FString>& values = { FString::FromInt(newPoints), player.getUserID() };

    SQL_Execution dbCon;
    dbCon.runUpdate(sql, values);
}

void UQuizRun::setLevelOne(TArray<FText> question)
{
    FText text1 = FText::FromString(FString::FromInt(questNum + 1)+".");
    FText text2 = question[0];

    FText quizQuestion = FText::Format(FText::FromString("{0} {1}"), text1, text2);

    txtQuestion->SetText(quizQuestion);
    txtOption1->SetText(question[1]);
    txtOption2->SetText(question[2]);
    txtOption3->SetText(question[3]);

    int i = 0;
    UTexture2D* img;
    for (i = 0; i < imgArray.Num(); i++) {

        img = imgArray[i];
        if (((question[1]).ToString()).Equals(img->GetName())) {
            imgOpt1->SetBrushFromTexture(img);
        }else if (((question[2]).ToString()).Equals(img->GetName())) {
            imgOpt2->SetBrushFromTexture(img);
        }else if (((question[3]).ToString()).Equals(img->GetName())) {
            imgOpt3->SetBrushFromTexture(img);
        }
    }
}

void UQuizRun::setLevelTwo(TArray<FText> question)
{
    FText text1 = FText::FromString(FString::FromInt(questNum + 1) + ".");
    FText text2 = question[0];

    FText quizQuestion = FText::Format(FText::FromString("{0} {1}"), text1, text2);

    txtQuestion->SetText(quizQuestion);
    txtOption2->SetText(question[1]);
    txtOption3->SetText(question[2]);
}

void UQuizRun::setLevelThree(TArray<FText> question)
{
    FText text1 = FText::FromString(FString::FromInt(questNum + 1) + ".");
    FText text2 = question[0];

    FText quizQuestion = FText::Format(FText::FromString("{0} {1}"), text1, text2);

    txtQuestion->SetText(quizQuestion);
    txtOption1->SetText(question[1]);
    txtOption2->SetText(question[2]);
    txtOption3->SetText(question[3]);
}

void UQuizRun::getQuestion()
{

    TArray<FText> question;
    int numQuestions = questionList.Num();

    questNum++;

    if (questNum<0 || questNum >= numQuestions) {
        questNum = -1;
        score =0;
       
        return;
    }
    
    
    question = questionList[questNum];
    

    if (level.Equals("1")  ) {
        shuffleOptions(question, 1, 3);
        questionList[questNum] = question;
        setLevelOne(question);
    }else if (level.Equals("2")) {
        shuffleOptions(question, 1, 2);
        questionList[questNum] = question;
        setLevelTwo(question);
    }else if (level.Equals("3")) {
        shuffleOptions(question, 1, 3);
        questionList[questNum] = question;
        setLevelThree(question);
    }
    
    
}

void UQuizRun::setGameUser(FString userID, FString name, int points, TArray<float> scoreRecord)
{
    vector<float> vect;
    vect.reserve(scoreRecord.Num());

    for (float Element : scoreRecord)
    {
        vect.push_back(Element);
    }
    player.setUser(name, userID, points);
}

FString UQuizRun::getID()
{

    return player.getUserID();
}

int UQuizRun::getUserPoints()
{
    return player.getPoints();
}

FString UQuizRun::getUserName()
{

    return player.getName();
}

TArray<float> UQuizRun::getScoreRecord()
{

    TArray<float> arr;
    arr.Reserve(player.getScore().size());

    for (float Element : player.getScore())
    {
        arr.Add(Element);
    }
    return arr;
}


