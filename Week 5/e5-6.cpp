/*
Write a program that prompts the user to input a positive integer. It should then output a message indicating whether the number is a prime number. (Note: An even number is prime if it is 2. An odd integer is prime if it is not divisible by any odd integer less than or equal to the square root of the number.)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 2) {
        isPrime = false;
    } else if (num == 2) {
        isPrime = true;
    } else if (num % 2 == 0) {
        isPrime = false;
    } else {
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}