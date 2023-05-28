// Fill out your copyright notice in the Description page of Project Settings.


#include "User.h"

User::User(){}

void User::setUser(FString name, FString userID, int points)
{
    currentUser.points = points;
    currentUser.fullName = name;
    currentUser.userID = userID;
}

User::~User()
{}

FString User::getName() {
    return currentUser.fullName;
}

FString User::getUserID() {
    return currentUser.userID;
}

void User::recordScore(float score)
{
    currentUser.scoreRecord.push_back(score);
}

vector<float> User::getScore()
{
    return currentUser.scoreRecord;
}

void User::setScore(vector<float> scores)
{
    currentUser.scoreRecord = scores;
}

float User::getAvgScore()
{
    vector<float> records = currentUser.scoreRecord;
    float avg=0;
    vector<float>::iterator i;

    for (i = records.begin(); i < records.end(); i++) {
        avg += *i;
    }
    return avg;
}

void User::setPoints(int points)
{
    currentUser.points = points;
}

int User::getPoints()
{
    return currentUser.points;
}

FString User::getRank()
{
    const char* s = "DELETE FROM User_Details WHERE UserID = ?";

    return FString();
}

const char* User::deactivateAccount()
{
    const char* s = "DELETE FROM User_Details WHERE UserID = ?";
    return s;
}


/*

class Admin : public User {
public:
    Admin(const string& name, int userID)
        : User(name, userID)
    {
    }

    void editUser(User& user, const string& newName) {
        user.name = newName;
    }

    void deleteUser(User& user) {
        // Perform deletion logic for the user
        // e.g., update database or remove from user list
    }

    void addUser(const string& name, int userID) {
        // Perform logic to add a new user
        // e.g., create a new User object and store it
    }

    void addQuestion(const string& question) {
        // Perform logic to add a new question
        // e.g., store the question in a question database or list
    }

    void deleteQuestion(const string& question) {
        // Perform logic to delete a question
        // e.g., remove the question from the question database or list
    }

    void viewQuestion(const string& question) {
        // Perform logic to view a question
        // e.g., display the details of the question
    }

    void viewUser(const User& user) {
        cout << "Name: " << user.getName() << endl;
        cout << "UserID: " << user.getUserID() << endl;
    }

    
};*/


