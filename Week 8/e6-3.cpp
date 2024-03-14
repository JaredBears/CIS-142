#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
int countVowels(string str);

int main() {
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << endl << "There are " << countVowels(str) << " vowels in this sentence." << endl;
}

bool isVowel(char ch) {
    ch = (char)tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}

int countVowels(string str) {
    int count = 0;
    for (char ch : str) {
        if (isVowel(ch)) {
            count++;
        }
    }
    return count;
}