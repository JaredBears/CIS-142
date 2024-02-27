#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "\nEnter the second integer: ";
    cin >> num2;
    cout << "\nEnter the operation to be performed (+, -, *, /): ";
    cin >> op;
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "error: division by zero" << endl;
        } else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
    } else {
        cout << "Invalid operation" << endl;
    }
    return 0;
}