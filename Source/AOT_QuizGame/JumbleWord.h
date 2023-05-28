// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

using namespace std;
/**
 * 
 */
class AOT_QUIZGAME_API JumbleWord
{
public:
    JumbleWord();
    FString GetJumbledWord();
    FString GetOriginal();

private:
    FString originalWord;
    FString jumbledWord;

    FString scrambleWord(const FString& Word);
};
