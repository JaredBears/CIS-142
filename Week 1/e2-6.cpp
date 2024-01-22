//Programming Exercise 2-6
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    double studyHours;

    cout << "What is your name? ";
    cin >> name;
    cout << endl;
    cout << "How many hours do you need to study? ";
    cin >> studyHours;
    cout << endl;

    cout << "Hello, " << name << "! On Saturday, you need to study " << studyHours << " hours for the exam." << endl;

    return 0;
}