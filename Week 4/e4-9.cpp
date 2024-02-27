#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float num1, num2;
    char op;
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "\nEnter the second floating-point number: ";
    cin >> num2;
    cout << "\nEnter the operation to be performed (+, -, *, /): ";
    cin >> op;
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << fixed << setprecision(2) << num1 + num2 << endl;
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << fixed << setprecision(2) << num1 - num2 << endl;
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << fixed << setprecision(2) << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "error: division by zero" << endl;
        } else {
            cout << num1 << " / " << num2 << " = " << fixed << setprecision(2) << num1 / num2 << endl;
        }
    } else {
        cout << "Invalid operation" << endl;
    }
    return 0;
}
