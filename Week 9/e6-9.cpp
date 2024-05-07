#include <iostream>

using namespace std;

/*
Write a function, reverseDigit, that takes an integer as a parameter and returns the number with its digits reversed.
For example:

the value of reverseDigit(12345) is 54321;
the value of reverseDigit(5600) is 65;
the value of reverseDigit(7008) is 8007;
and the value of reverseDigit(–532) is –235.
*/

int reverseDigit(int num);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reverse of " << num << " is " << reverseDigit(num) << endl;
    return 0;
}

int reverseDigit(int num)
{
    if (num < 0)
    {
        return -reverseDigit(-num);
    }
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}