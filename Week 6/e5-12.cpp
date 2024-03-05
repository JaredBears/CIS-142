/*
The population of town A is less than the population of town B. However, the population of town A is growing faster than the population of town B.

Write a program that prompts the user to enter:

The population of town A
The population of town B
The growth rate of town A
The growth rate of town B
The program outputs:

After how many years the population of town A will be greater than or equal to the population of town B
The populations of both the towns at that time.
(A sample input is: Population of town A = 5,000, growth rate of town A = 4%, population of town B = 8,000, and growth rate of town B = 2%.)

*/

#include <iostream>

using namespace std;

int main() {
    int popA, popB;
    float growthA, growthB;
    int years = 0;
    cout << "Enter the population of town A: ";
    cin >> popA;
    cout << endl << "Enter the population of town B: ";
    cin >> popB;
    cout << endl << "Enter the growth rate of town A: ";
    cin >> growthA;
    cout << endl << "Enter the growth rate of town B: ";
    cin >> growthB;
    while (popA < popB) {
        popA += popA * (growthA / 100);
        popB += popB * (growthB / 100);
        years++;
    }
    cout << "After " << years << " years, the population of town A will be" << popA << "which is greater than or equal to the population of town B, " << popB << "." << endl;
    return 0;
}