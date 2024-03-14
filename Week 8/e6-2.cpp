#include <iostream>

using namespace std;

bool isVowel(char ch);

int main() {
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << ch << " is a vowel: " << isVowel(ch) << endl;
    return 0;
}

bool isVowel(char ch) {
    ch = (char)tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}