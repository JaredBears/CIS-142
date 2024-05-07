
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*

Write a program that defines the named constant PI, const double PI = 3.14159;, which stores the value of π. The program should use PI and the functions listed in Table 6-1 to accomplish the following:

Output the value of √π .
Prompt the user to input the value of a double variable r, which stores the radius of a sphere. The program then outputs the following:
The value of 4.0πr², which is the surface area of the sphere.
The value of (4.0/3.0)πr³, which is the volume of the sphere.
You should format your output like the following example:

Surface area of the sphere: 4 * PI * 5.00 ^ 2 = 314.16
Volume of the sphere: 4 / 3 * PI * 5.00 ^ 3 = 523.60
Your output must match the wording precisely to earn full credit. Format your output with setprecision(2) to ensure the proper number of decimals for testing!

*/

int main()
{
    const double PI = 3.14159;
    double r;
    cout << fixed << setprecision(2);
    cout << "Square root of PI: " << sqrt(PI) << endl;
    cout << "Enter the radius of a sphere: ";
    cin >> r;
    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << 4 * PI * pow(r, 2) << endl;
    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = " << (4.0 / 3.0) * PI * pow(r, 3) << endl;
    return 0;
}