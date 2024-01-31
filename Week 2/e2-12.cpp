#include <iostream>

using namespace std;

int main() {
    int seconds, minutes, hours;
    cout << "Enter the elapsed time in seconds: ";
    cin >> seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    cout << "The elapsed time is " << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}