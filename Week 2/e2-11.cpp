#include <iostream>

using namespace std;                                   
 
int main()
{
    int capacity, mpg, distance;
    cout << "Enter the capacity of the gas tank in gallons: ";
    cin >> capacity;
    cout << "\nEnter the miles per gallon of the car: ";
    cin >> mpg;
    distance = capacity * mpg;
    cout << "\nThe car can travel " << distance << " miles on a full tank of gas.\n";
    return 0;
}