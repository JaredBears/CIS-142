/*
Write a program that prompts the user to enter two integers. The program outputs how many numbers are multiples of 3 and how many numbers are multiples of 5 between the two integers (inclusive).
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, count3 = 0, count5 = 0;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++) {
        if (i % 3 == 0) {
            count3++;
        }
        if (i % 5 == 0) {
            count5++;
        }
    }
    cout << "Multiples of 3: " << count3 << endl;
    cout << "Multiples of 5: " << count5 << endl;
    return 0;
}