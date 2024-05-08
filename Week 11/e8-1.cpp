/*
Write a C++ program that declares an array alpha of 50 components of type double. 
Initialize the array so that the first 25 components are equal to the square of the index variable (the position that element will occupy), 
and the last 25 components are equal to three times the index variable. Output the array so that 10 elements per line are printed.

For the number at index 5, the value would be 25, which is 5 squared. The 25th index would hold a value of 75, which is 3 * 25.

An example of the program output is shown below:

 0    1    4    9   16   25   36   49   64   81
 100  121  144  169  196  225  256  289  324  361
 400  441  484  529  576   75   78   81   84   87
 90   93   96   99  102  105  108  111  114  117
 120  123  126  129  132  135  138  141  144  147
*/

#include <iostream>

using namespace std;

int main()
{
    double alpha[50];
    for (int i = 0; i < 25; i++)
    {
        alpha[i] = i * i;
    }
    for (int i = 25; i < 50; i++)
    {
        alpha[i] = 3 * i;
    }
    for (int i = 0; i < 50; i++)
    {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}
