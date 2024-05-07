/*
Define an enumeration type triangleType that has the values scalene, isosceles, equilateral, and noTriangle.
Write a function triangleShape that takes as parameters three numbers, each of which represents the length of a side of the triangle. The function should return the shape of the triangle. (Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.)
Write a program that prompts the user to input the length of the sides of a triangle and outputs the shape of the triangle.
*/

#include <iostream>

using namespace std;

enum triangleType { scalene, isosceles, equilateral, noTriangle };

triangleType triangleShape(int a, int b, int c);

int main() {
    int a, b, c;
    cout << "Enter the length of the sides of a triangle: ";
    cin >> a >> b >> c;
    cout << "The shape of the triangle is: ";
    switch (triangleShape(a, b, c)) {
    case scalene:
        cout << "scalene";
        break;
    case isosceles:
        cout << "isosceles";
        break;
    case equilateral:
        cout << "equilateral";
        break;
    case noTriangle:
        cout << "noTriangle";
        break;
    }
    cout << endl;
    return 0;
}

triangleType triangleShape(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return noTriangle;
    }
    if (a == b && b == c) {
        return equilateral;
    }
    if (a == b || b == c || a == c) {
        return isosceles;
    }
    return scalene;
}
