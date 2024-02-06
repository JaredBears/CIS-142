#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    string firstName, lastName, department;
    double salary, bonusPercentage, subTotalSalary, taxPercentage, paycheck;

    double distanceTravelled, travelTime, averageSpeed;

    int cupsSold;
    double costPerCup, salesAmount;

    inFile >> firstName >> lastName >> department >> salary >> bonusPercentage >> taxPercentage;
    subTotalSalary = salary + (salary * bonusPercentage / 100);
    paycheck = subTotalSalary - (subTotalSalary * taxPercentage / 100);

    outFile << fixed << showpoint << setprecision(2);
    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonusPercentage << "%" << ", Taxes: " << taxPercentage << "%" << endl;
    outFile << "Paycheck: $" << paycheck << endl << endl;

    inFile >> distanceTravelled >> travelTime;
    averageSpeed = distanceTravelled / travelTime;

    outFile << "Distance travelled: " << distanceTravelled << " miles, Traveling time: " << travelTime << " hours" << endl;
    outFile << "Average speed: " << averageSpeed << " miles per hour" << endl << endl;

    inFile >> cupsSold >> costPerCup;
    salesAmount = cupsSold * costPerCup;

    outFile << "Number of Coffee Cups sold: " << cupsSold << ", Cost: $" << costPerCup << " per cup" << endl;
    outFile << "Sales Amount = $" << salesAmount << endl;

    inFile.close();
    outFile.close();
    return 0;
}
