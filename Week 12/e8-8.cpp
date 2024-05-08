/*
Consider the provided function main in main.cpp:

Write the definition of the function inputArray that prompts the user to input 20 numbers and stores the numbers into alpha.
Write the definition of the function doubleArray that initializes the elements of beta to two times the corresponding elements in alpha. Make sure that you prevent the function from modifying the elements of alpha.
Write the definition of the function copyAlphaBeta that stores alpha into the first five rows of matrix and beta into the last five rows of matrix. Make sure that you prevent the function from modifying the elements of alpha and beta.
Write the definition of the function printArray that prints any one-dimensional array of type int. Print 15 elements per line.
Write a C++ program that tests the function main and the functions discussed in the parts above. (Add additional functions, such as printing a two-dimensional array, as needed.)
*/

#include <iostream>

using namespace std;

void inputArray(int alpha[], int size);
void doubleArray(int alpha[], int beta[], int size);
void copyAlphaBeta(int alpha[], int beta[], int matrix[][4]);
void printArray(int arr[], int size);
void printMatrix(int matrix[][4]);

int main()
{
    int alpha[20];
    int beta[20];
    int matrix[10][4];

    inputArray(alpha, 20);
    doubleArray(alpha, beta, 20);
    copyAlphaBeta(alpha, beta, matrix);

    cout << "Alpha:" << endl;
    printArray(alpha, 20);
    cout << endl << "Beta:" << endl;
    printArray(beta, 20);
    cout << endl << "Matrix:" << endl;
    printMatrix(matrix);
}

void inputArray(int alpha[], int size)
{
    cout << "Enter 20 integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> alpha[i];
    }
}

void doubleArray(int alpha[], int beta[], int size)
{
    for (int i = 0; i < size; i++)
    {
        beta[i] = alpha[i] * 2;
    }
}

void copyAlphaBeta(int alpha[], int beta[], int matrix[][4])
{
    for (int i = 0; i < 5; i++)
    {
        matrix[i][0] = alpha[i];
        matrix[i][1] = alpha[i + 5];
        matrix[i][2] = alpha[i + 10];
        matrix[i][3] = alpha[i + 15];
    }

    for (int i = 0; i < 5; i++)
    {
        matrix[i + 5][0] = beta[i];
        matrix[i + 5][1] = beta[i + 5];
        matrix[i + 5][2] = beta[i + 10];
        matrix[i + 5][3] = beta[i + 15];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if ((i + 1) % 15 == 0)
        {
            cout << endl;
        }
    }
}

void printMatrix(int matrix[][4])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

