// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "sqlite/sqlite3.h"

/**
 * 
 */
class AOT_QUIZGAME_API SQL_Execution
{

private:
	sqlite3* db;
	FString dbPath;
public:
	SQL_Execution();
	~SQL_Execution();

	

	TArray< TArray<FText> >  runSelect(const char* sql);
	TArray<FText> searchDb(const char* sql, const TArray<FString>& values);

	void runInsert(const char* sql, const TArray<FString>& values);
	void runUpdate(const char* sql, const TArray<FString>& values);
	void runDelete(const char* sql, const TArray<FString>& values);
};
