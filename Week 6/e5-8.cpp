#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;
    int sumEven = 0;
    int sumOddSquare = 0;

    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;
    if (firstNum >= secondNum)
    {
        int temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

    cout << "Odd numbers between " << firstNum << " and " << secondNum << " are: ";
    int i = firstNum;
    while (i <= secondNum)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            sumOddSquare += i * i;
        }
        else
        {
            sumEven += i;
        }
        i++;
    }

    cout << endl;

    cout << "Sum of all even numbers between " << firstNum << " and " << secondNum << " is: " << sumEven << endl;

    cout << "Numbers and their squares between 1 and 10 are: ";
    i = 1;
    while (i <= 10)
    {
        cout << i << " " << i * i << endl;
        i++;
    }

    cout << endl;

    cout << "Sum of the square of the odd numbers between " << firstNum << " and " << secondNum << " is: ";
    cout << sumOddSquare << endl;

    cout << "Uppercase letters are: ";
    char c = 'A';
    while (c <= 'Z')
    {
        cout << c << " ";
        c++;
    }
    cout << endl;

    return 0;
}