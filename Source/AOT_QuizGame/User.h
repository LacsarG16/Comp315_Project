// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <iostream>
#include "CoreMinimal.h"

using namespace std;
/**
 * 
 */

struct UserDet {
	FString fullName;
	FString userID;
	int points;
	vector<float> scoreRecord;
};

class AOT_QUIZGAME_API User
{
public:
	User();
	void setUser(FString name, FString userID, int points);
	~User();
	FString getName();
	FString getUserID();
	void recordScore(float score);
	vector<float> getScore();
	void setScore(vector<float> scores);
	float getAvgScore();
	void setPoints(int points);
	int getPoints();
	FString getRank();
	
	const char* deactivateAccount();

private:
	UserDet currentUser;
};