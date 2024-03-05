#include <iostream>

using namespace std;

int main() {
    int firstNum, secondNum;
    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;
    if(firstNum > secondNum){
        int temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }
    int sumEven, sumSquareOdd;
    sumEven = sumSquareOdd = 0;
    cout << "Odd numbers between " << firstNum << " and " << secondNum << " are: ";
    for(int i = firstNum; i <= secondNum; i++){
        if(i % 2 != 0){
            cout << i << " ";
            sumSquareOdd += i * i;
        }
        else{
            sumEven += i;
        }
    }
    cout << endl;
    cout << "Sum of even numbers between " << firstNum << " and " << secondNum << " is: " << sumEven << endl;
    cout << "Numbers and their squares between 1 and 10 are: ";
    for(int i = 1; i <= 10; i++){
        cout << i << " " << i * i << " ";
    }
    cout << endl;
    cout << "Sum of the square of the odd numbers between " << firstNum << " and " << secondNum << " is: " << sumSquareOdd << endl;
    cout << "Uppercase letters are: ";
    for(char i = 'A'; i <= 'Z'; i++){
        cout << i << " ";
    }
    return 0;
}
