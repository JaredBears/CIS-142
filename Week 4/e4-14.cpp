#include <iostream>

using namespace std;

int main() {
    double hoursParked, parkingFee;
    cout << "Enter the number of hours parked: ";
    cin >> hoursParked;
    parkingFee = (hoursParked >= 0 && hoursParked <= 3) ? 5 : (hoursParked > 3 && hoursParked <= 9) ? 6 * int(hoursParked + 1) : 60;
    cout << parkingFee;
    return 0;
}