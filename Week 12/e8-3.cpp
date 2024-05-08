/*
Write a C++ function, lastLargestIndex, that takes as parameters an int array and its size and returns the index of the last occurrence of the largest element in the array. To test your function, write a main that prompts a user for a list of 15 integers and outputs the index and value of the first occurrence of the largest value.

An example of the program is shown below:

Enter 15 integers:
1
2
3
4
5
6
7
8
9
0
10
11
12
13
14
1 2 3 4 5 6 7 8 9 0 10 11 12 13 14
The position of the last occurrence of the largest element in list is: 14
The largest element in list is: 14
You can use the following integer lists to test your code:

56, 34, 67, 54, 56, 87, 66, 92, 15, 32, 55, 54, 88, 92, 30
79, 26, 79, 87, 73, 44, 67, 46, 55, 13, 20, 20, 33, 42, 60
63, 1, 40, 81, 30, 11, 26, 44, 98, 1, 80, 98, 15, 3, 42
*/

#include <iostream>

using namespace std;

int lastLargestIndex(int arr[], int size);

int main()
{
    int arr[15];
    int largestIndex;

    cout << "Enter 15 integers:" << endl;
    for (int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    largestIndex = lastLargestIndex(arr, 15);

    cout << "The position of the last occurrence of the largest element in list is: " << largestIndex << endl;
    cout << "The largest element in list is: " << arr[largestIndex] << endl;

    return 0;
}

int lastLargestIndex(int arr[], int size)
{
    int largest = arr[0];
    int largestIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }

    return largestIndex;
}