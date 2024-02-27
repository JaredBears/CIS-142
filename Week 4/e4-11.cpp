#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double baseSalary, bonus, totalSales, additionalBonus;
    int noOfServiceYears;

    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << "\nEnter the number of years that the salesperson has been with the store: ";
    cin >> noOfServiceYears;
    cout << "\nEnter the total sales made by the salesperson for the month: ";
    cin >> totalSales;
    bonus = (noOfServiceYears <= 5) ? noOfServiceYears * 10 : noOfServiceYears * 20;
    additionalBonus = (totalSales >= 5000 && totalSales < 10000) ? totalSales * 0.03 : (totalSales >= 10000) ? totalSales * 0.06 : 0;
    cout << "\nMonthly wages: $" << fixed << setprecision(2) << baseSalary + bonus + additionalBonus << endl;
    return 0;
}