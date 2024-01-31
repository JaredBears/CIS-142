//Programming Exercise 2-9
#include <iostream>

using namespace std;

int main() {
    double score1, score2, score3, score4, score5, average;
    cout << "Enter 5 test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    cout << "Your average test score is: " << average << endl;
    return 0;
}
