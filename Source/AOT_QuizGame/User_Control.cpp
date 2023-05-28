// Fill out your copyright notice in the Description page of Project Settings.


#include "User_Control.h"
#include "QuizRun.h"
#include <random>
#include <iostream>

void UUser_Control::addUser(FString Name, FString Surname, FString Passcode, FString Email)
{

	Authentication<FString> objP(Passcode);

	if (Passcode.Len() < 4) {
		txtShowUserID->SetColorAndOpacity(FLinearColor::Red);
		txtShowUserID->SetText(FText::FromString("Invalid Passcode! Must be 4+ digits"));
	}else if (!objP.isInteger()) {
		txtShowUserID->SetColorAndOpacity(FLinearColor::Red);
		txtShowUserID->SetText(FText::FromString("Invalid Passcode! Must be a number"));
		return;
	}
	
    Authentication<FString> objE(Email);
	if (!objE.isEmail()) {
		txtShowUserID->SetColorAndOpacity(FLinearColor::Red);
		txtShowUserID->SetText(FText::FromString("Email is invalid"));
		return;
	}

	FString UserID = createUserID(Name, Surname);
    const char* sql = "INSERT INTO User_Details(UserID, Name, Surname, Password, Email, Points) VALUES (?, ?, ?, ?, ?, ?)";
    const TArray<FString>& values = {UserID, Name,Surname,Passcode,Email,"0"};
	SQL_Execution dbCon;
	dbCon.runInsert(sql,values);

	txtShowUserID->SetColorAndOpacity(FLinearColor::Black);
	FString msgID = TEXT("USER ID :")+UserID;
	txtShowUserID->SetText(FText::FromString(msgID));

}

FString UUser_Control::createUserID(FString n, FString s)
{
	FString id = n.Left(2) + s.Left(1);
	int randomNum = rand() % 9999 + 1;
	FString randomStr = FString::Printf(TEXT("%04d"), randomNum); //0001 to 9999 
	id = id + randomStr;
	return  id;
}

void UUser_Control::displayDetails()
{
	txtWelcome->SetText(FText::FromString("WELCOME " + player.getUserID()));
	
	txtTotalPoints->SetText(FText::FromString(FString::Printf(TEXT("TOTAL POINTS : %d"), player.getPoints()))); 
	txtRecentAvg->SetText(FText::FromString(FString::Printf(TEXT("AVERAGE SCORE : %.0f"), player.getAvgScore())));
}

FString UUser_Control::getID()
{
	
	return player.getUserID();
}

int UUser_Control::getUserPoints()
{
	return player.getPoints();
}

FString UUser_Control::getUserName()
{

	return player.getName();
}

TArray<float> UUser_Control::getScoreRecord()
{
	TArray<float> arr;
	arr.Reserve(player.getScore().size());

	for (float Element : player.getScore())
	{
		arr.Add(Element);
	}
	return arr;
}

void UUser_Control::playExtraGame()
{
	JumbleWord jw;
	originalWord = jw.GetOriginal();
	txtCorrect->SetText(FText::FromString(""));
	txtJumbledWord->SetText(FText::FromString(jw.GetJumbledWord()));
}

bool UUser_Control::checkJumbleAnswer(FString answer)
{
	if (answer.Equals(originalWord)) {
		txtCorrect->SetColorAndOpacity(FLinearColor::Green);
		txtCorrect->SetText(FText::FromString("CORRECT ANSWER!!!"));
	}
	else {
		txtCorrect->SetColorAndOpacity(FLinearColor::Red);
		txtCorrect->SetText(FText::FromString("INCORRECT ANSWER!!!"));
	}
	return answer.Equals(originalWord);
}

void UUser_Control::setPlayedUser(FString userID, FString name, int points, TArray<float> scoreRecord)
{
	vector<float> vect;
	vect.reserve(scoreRecord.Num());

	for (float Element : scoreRecord)
	{
		vect.push_back(Element);
	}

	player.setUser(name, userID, points);
	player.setScore(vect);
}

void UUser_Control::displayBoard()
{

	SQL_Execution dbCon;
	const char* sql = "SELECT Name, Points FROM User_Details order by Points DESC";

	TArray< TArray<FText> > ranks = dbCon.runSelect(sql);

	medtRanks->SetText(FText::GetEmpty());

	FText appendedText;
	FString d = "RANKS: \n";

	for (const TArray<FText>& row : ranks)
	{
		FString rowText;
		for (const FText& text : row)
		{
			FString textString = text.ToString();
			rowText += textString + TEXT("\t");
		}

		d += rowText + "\n";
		
	}
	appendedText = FText::FromString(d);
	medtRanks->SetText(appendedText);

}

bool UUser_Control::checkLogin(FString UserID, FString Password)
{

	const char* sql = "SELECT Name,Surname,Password,Points FROM User_Details WHERE UserID = ?";
	const TArray<FString>& values = { UserID };
	//PaG6394
	SQL_Execution dbCon;
	TArray<FText> rowText = dbCon.searchDb(sql, values);

	if (rowText.Num() > 0)
	{

		if (Password.Equals(rowText[2].ToString())) {

			FString fullName = rowText[0].ToString() + " " + rowText[1].ToString();
			FString ps = rowText[3].ToString();
			int points = FCString::Atoi(*ps);
			
			player.setUser(fullName, UserID, points);
			
			return true;
			
		}

		txtInvalid->SetText(FText::FromString("Invalid Password!!!"));
		
		return false;
		
	}

	txtInvalid->SetText(FText::FromString("Invalid User ID!!!"));
	return false;
	
}

