// Write your code here
#include <iostream>
#include <string>
#include <iomanip>
#include "studentType.h"
using namespace std;

void studentType::setFirstName(string val)
{
    firstName = val;
}

void studentType::setLastName(string val)
{
    lastName = val;
}

void studentType::setGrade()
{
    double currentScore;
    currentScore = (testScore + programmingScore) / 2;
    if (currentScore >= 90)
    {
        courseGrade = 'A';
    }
    else if (currentScore >= 80)
    {
        courseGrade = 'B';
    }
    else if (currentScore >= 70)
    {
        courseGrade = 'C';
    }
    else if (currentScore >= 60)
    {
        courseGrade = 'D';
    }
    else
    {
        courseGrade = 'F';
    }
}

void studentType::setTestScore(int val)
{
    testScore = val;
}

void studentType::setProgScore(int val)
{
    programmingScore = val;
}

void studentType::setGPA(double val)
{
    GPA = val;
}

string studentType::getFirstName()
{
    return firstName;
}

string studentType::getLastName()
{
    return lastName;
}

char studentType::getGrade()
{
    return courseGrade;
}

int studentType::getTestScore()
{
    return testScore;
}

int studentType::getProgScore()
{
    return programmingScore;
}

double studentType::getGPA()
{
    return GPA;
}

void studentType::print() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Grade: " << courseGrade << endl;
    cout << "Test score: " << testScore << endl;
    cout << "Programming score: " << programmingScore << endl;
    cout << "GPA: " << fixed << setprecision(2) << GPA << endl;
    cout << "***************" << endl;
}

studentType::studentType(string fName, string lName, char cGrade, int tScore, int pScore, double gpa)
{
    firstName = fName;
    lastName = lName;
    courseGrade = cGrade;
    testScore = tScore;
    programmingScore = pScore;
    GPA = gpa;
    setGrade();
}