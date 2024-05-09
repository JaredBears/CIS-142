/*
Write a program that reads students’ names followed by their test scores.
The program should output each student’s name followed by the test scores and the relevant grade.
It should also find and print the highest test score and the name of the students having the highest test score.

Student data should be stored in a struct variable of type studentType, which has four components:
studentFName and studentLName of type string,
testScore of type int (testScore is between 0 and 100),
and grade of type char.

Suppose that the class has 20 students. Use an array of 20 components of type studentType.

Your program must contain at least the following functions:
A function to read the students’ data into the array.
A function to assign the relevant grade to each student.
A function to find the highest test score.
A function to print the names of the students having the highest test score.


Your program must output each student’s name in this form:
last name followed by a comma, followed by a space, followed by the first name; the name must be left justified.

Moreover, other than declaring the variables and opening the input and output files, the function main should only be a collection of function calls.

Your program should accept no input and save the output to Ch9_Ex2Out.txt.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void readData(studentType students[]);
void assignGrades(studentType students[]);
int findHighestScore(studentType students[]);
void printHighestScore(studentType students[], int highestScore);

int main()
{
    studentType students[20];
    readData(students);
    assignGrades(students);
    int highestScore = findHighestScore(students);
    printHighestScore(students, highestScore);

    return 0;
}

void readData(studentType students[])
{
    ifstream inFile;
    inFile.open("Ch9_Ex2Data.txt");

    for (int i = 0; i < 20; i++)
    {
        inFile >> students[i].studentFName >> students[i].studentLName >> students[i].testScore;
    }

    inFile.close();
}

void assignGrades(studentType students[])
{

    ofstream outFile;
    outFile.open("Ch9_Ex2Out.txt");
    outFile << "Student Grades";
    for (int i = 0; i < 20; i++)
    {
        if (students[i].testScore >= 90)
        {
            students[i].grade = 'A';
        }
        else if (students[i].testScore >= 80)
        {
            students[i].grade = 'B';
        }
        else if (students[i].testScore >= 70)
        {
            students[i].grade = 'C';
        }
        else if (students[i].testScore >= 60)
        {
            students[i].grade = 'D';
        }
        else
        {
            students[i].grade = 'F';
        }
        outFile << endl
                << students[i].studentLName << ", " << students[i].studentFName << " " << students[i].testScore << " " << students[i].grade;
    }
    outFile.close();
}

int findHighestScore(studentType students[])
{
    int highestScore = students[0].testScore;

    for (int i = 1; i < 20; i++)
    {
        if (students[i].testScore > highestScore)
        {
            highestScore = students[i].testScore;
        }
    }

    return highestScore;
}

void printHighestScore(studentType students[], int highestScore)
{

    cout << "The highest test score is " << highestScore;
    cout << endl
         << "The students who got the highest test score are:";

    for (int i = 0; i < 20; i++)
    {
        if (students[i].testScore == highestScore)
        {
            cout << endl
                 << students[i].studentLName << ", " << students[i].studentFName;
        }
    }
}