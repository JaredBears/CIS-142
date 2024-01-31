#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, num4, num5;
    double sum;
    int rounded_sum;
    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    sum = num1 + num2 + num3 + num4 + num5;
    rounded_sum = sum + 0.5;
    cout << "The sum is " << rounded_sum << endl;
    return 0;
}