//Programming Exercise 2-8
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SECRET = 11;
    const double RATE = 12.50;

    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Line 1: Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "The value of num1 = " << num1
         << " and the value of num2 = " << num2 << endl;

    newNum = 2 * num1 + num2;

    cout << "The new value of newNum = "
         << newNum << endl
         << endl;

    newNum += SECRET;

    cout << "After incrementing, the new value of newNum = "
         << newNum << endl;

    cout << "Enter your last name: ";
    cin >> name;
    cout << endl;

    cout << "Enter the number of hours you worked (0-70): ";
    cin >> hoursWorked;
    cout << endl;

    wages = RATE * hoursWorked;

    cout << "Name: " << name << endl
         << "Pay Rate: $" << RATE << endl
         << "Hours Worked: " << hoursWorked << endl
         << "Salary: $" << wages << endl;

    return 0;
}
