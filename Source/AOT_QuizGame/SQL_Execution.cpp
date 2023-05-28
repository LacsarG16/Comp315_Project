// Fill out your copyright notice in the Description page of Project Settings.


#include "SQL_Execution.h"
#include "QuizRun.h"

SQL_Execution::SQL_Execution()
{
    FString contentDir = FPaths::ProjectContentDir();
    FString relativePath = "Database/QuizDatabase.db";
    dbPath = FPaths::Combine(*contentDir, *relativePath);
    
    int rc = sqlite3_open(TCHAR_TO_UTF8(*dbPath), &db);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to open database: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_close(db);
    }

}

SQL_Execution::~SQL_Execution()
{
    sqlite3_close(db);
}

TArray< TArray<FText> > SQL_Execution::runSelect(const char* sql)
{
    TArray< TArray<FText> > arrText;

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to prepare statement: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return arrText;
    }
    int numCol = sqlite3_column_count(stmt);
    int row = -1;

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        row++;
        arrText.Add(TArray<FText>());
        for (int i = 0; i < numCol;i++) {
            const unsigned char* record = sqlite3_column_text(stmt, i);
            arrText[row].Add(FText::FromString(UTF8_TO_TCHAR((const char*)record)));
        }
    }

    sqlite3_finalize(stmt);

    return arrText;
}

TArray<FText> SQL_Execution::searchDb(const char* sql, const TArray<FString>& values)
{
    TArray<FText> rowText;

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to prepare statement: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return rowText;
    }

    //bind the parameters
    int paramIndex = 1;
    for (const FString& value : values) {
        rc = sqlite3_bind_text(stmt, paramIndex++, TCHAR_TO_UTF8(*value), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            UE_LOG(LogTemp, Error, TEXT("Failed to bind parameter: %s"), sqlite3_errmsg(db));
            sqlite3_finalize(stmt);
            sqlite3_close(db);
            return rowText;
        }
    }

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        int numCol = sqlite3_column_count(stmt);
        for (int i = 0; i < numCol; i++) {
            const unsigned char* record = sqlite3_column_text(stmt, i);
            rowText.Add(FText::FromString(UTF8_TO_TCHAR((const char*)record)));
        }
    }

    sqlite3_finalize(stmt);

    return rowText;
}

void SQL_Execution::runInsert(const char* sql, const TArray<FString>& values)
{
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to prepare statement: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return;
    }

    // Bind the parameters
    int paramIndex = 1;
    for (const FString& value : values) {
        rc = sqlite3_bind_text(stmt, paramIndex++, TCHAR_TO_UTF8(*value), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            UE_LOG(LogTemp, Error, TEXT("Failed to bind parameter: %s"), sqlite3_errmsg(db));
            sqlite3_finalize(stmt);
            sqlite3_close(db);
            return;
        }
    }

    // Execute the prepared statement
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute prepared statement: %s"), sqlite3_errmsg(db));
    }

    sqlite3_finalize(stmt);
}

void SQL_Execution::runUpdate(const char* sql, const TArray<FString>& values)
{
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to prepare statement: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return;
    }

    // Bind the parameters
    int paramIndex = 1;
    for (const FString& value : values) {
        rc = sqlite3_bind_text(stmt, paramIndex++, TCHAR_TO_UTF8(*value), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            UE_LOG(LogTemp, Error, TEXT("Failed to bind parameter: %s"), sqlite3_errmsg(db));
            sqlite3_finalize(stmt);
            sqlite3_close(db);
            return;
        }
    }

    // Execute the prepared statement
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute prepared statement: %s"), sqlite3_errmsg(db));
    }

    sqlite3_finalize(stmt);
}

void SQL_Execution::runDelete(const char* sql, const TArray<FString>& values)
{
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        UE_LOG(LogTemp, Error, TEXT("Failed to prepare statement: %s"), sqlite3_errmsg(db));
        UE_LOG(LogTemp, Error, TEXT("File path: %s"), *dbPath);
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return;
    }

    // Bind the parameters
    int paramIndex = 1;
    for (const FString& value : values) {
        rc = sqlite3_bind_text(stmt, paramIndex++, TCHAR_TO_UTF8(*value), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            UE_LOG(LogTemp, Error, TEXT("Failed to bind parameter: %s"), sqlite3_errmsg(db));
            sqlite3_finalize(stmt);
            sqlite3_close(db);
            return;
        }
    }

    // Execute the prepared statement
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute prepared statement: %s"), sqlite3_errmsg(db));
    }

    sqlite3_finalize(stmt);
}
    
