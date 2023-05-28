// Fill out your copyright notice in the Description page of Project Settings.


#include "JumbleWord.h"
#include "Misc/Guid.h"

JumbleWord::JumbleWord()
{
    TArray<FString> Words = { "Marley", "Levi", "Walls", "Titan"};

    // Randomly select a word from the array
    int32 WordCount = Words.Num();
    int32 RandomIndex = FMath::RandRange(0, WordCount - 1);
    originalWord = Words[RandomIndex];

    // Jumble the selected word
    jumbledWord = scrambleWord(originalWord);
}

FString JumbleWord::GetJumbledWord()
{
    return jumbledWord;
}

FString JumbleWord::GetOriginal()
{
    return originalWord;
}

FString JumbleWord::scrambleWord(const FString& Word)
{
    FString JumbledWord = Word;
    int32 Length = JumbledWord.Len();

    for (int32 i = 0; i < Length - 1; ++i)
    {
        int32 j = i + FMath::RandRange(0, Length - i - 1);
        TCHAR TempChar = JumbledWord[i];
        JumbledWord[i] = JumbledWord[j];
        JumbledWord[j] = TempChar;
    }

    return JumbledWord;
}
