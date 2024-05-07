/*
Write a program that prompts the user to input a string. 
The program then uses the function substr to remove all the vowels from the string. 
For example, if str = "There", then after removing all the vowels, str = "Thr". 
After removing all the vowels, output the string. 
Your program must contain a function to remove all the vowels and a function to determine whether a character is a vowel.
*/

#include <iostream>

using namespace std;

bool isVowel(char c);

string removeVowels(string str);

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "After removing all the vowels, the string is: " << removeVowels(str) << endl;
    return 0;
}

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string removeVowels(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (!isVowel(str[i]))
        {
            result += str[i];
        }
    }
    return result;
}
