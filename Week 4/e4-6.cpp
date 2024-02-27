#include <iostream>

using namespace std;

int main() {
    int totalCookies, boxes, containers, leftoverCookies, leftoverBoxes;
    cout << "Enter the total number of cookies: ";
    cin >> totalCookies;
    boxes = totalCookies / 24;
    leftoverCookies = totalCookies % 24;
    containers = boxes / 75;
    leftoverBoxes = boxes % 75; 
    cout << "The number of boxes to ship the cookies: " << boxes << endl;
    cout << "The number of containers to ship the cookies: " << containers << endl;
    cout << "The number of leftover cookies: " << leftoverCookies << endl;
    cout << "The number of leftover boxes: " << leftoverBoxes << endl;
    return 0;
}
