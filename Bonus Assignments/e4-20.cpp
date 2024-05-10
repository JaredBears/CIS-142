/*
Summary
The cost of renting a room at a hotel is, say $100.00 per night. For special occasions, such as a wedding or conference, the hotel offers a special discount as follows.

If the number of rooms booked is:

at least 10, the discount is 10%
at least 20, the discount is 20%
at least 30, the discount is 30%
Also if rooms are booked for at least three days, then there is an additional 5% discount.

Instructions
Write a program that prompts the user to enter:

The cost of renting one room
The number of rooms booked
The number of days the rooms are booked
The sales tax (as a percent).
The program outputs:

The cost of renting one room
The discount on each room as a percent
The number of rooms booked
The number of days the rooms are booked
The total cost of the rooms
The sales tax
The total billing amount.
Your program must use appropriate named constants to store special values such as various discounts.

Since your program handles currency, make sure to use a data type that can store decimals with a precision to 2 decimals.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double COST_PER_ROOM = 100.00;
    const double DISCOUNT_10 = 0.10;
    const double DISCOUNT_20 = 0.20;
    const double DISCOUNT_30 = 0.30;
    const double DISCOUNT_3_DAYS = 0.05;

    double costPerRoom;
    int numRooms;
    int numDays;
    double salesTax;

    cout << "Enter the cost of renting one room: ";
    cin >> costPerRoom;

    cout << endl
         << "Enter the number of rooms booked: ";
    cin >> numRooms;

    cout << endl
         << "Enter the number of days the rooms are booked: ";
    cin >> numDays;

    cout << endl
         << "Enter the sales tax (as a percent): ";
    cin >> salesTax;

    double totalCost = costPerRoom * numRooms * numDays;

    double discount = 0.0;
    if (numRooms >= 30)
    {
        discount = DISCOUNT_30;
    }
    else if (numRooms >= 20)
    {
        discount = DISCOUNT_20;
    }
    else if (numRooms >= 10)
    {
        discount = DISCOUNT_10;
    }

    if (numDays >= 3)
    {
        discount += DISCOUNT_3_DAYS;
    }

    double discountAmount = totalCost * discount;
    totalCost -= discountAmount;
    double salesTaxAmount = totalCost * (salesTax / 100);
    double totalBillingAmount = totalCost + salesTaxAmount;

    cout << endl
         << fixed << setprecision(2);
    cout << "Cost of renting one room: $" << costPerRoom << endl;
    cout << "Discount on each room as a percent: " << discount * 100 << "%" << endl;
    cout << "Number of rooms booked: " << numRooms << endl;
    cout << "Number of days the rooms are booked: " << numDays << endl;
    cout << "Total cost of the rooms: $" << totalCost << endl;
    cout << "Sales tax: " << salesTaxAmount << "%" << endl;
    cout << "Total billing amount: $" << totalBillingAmount << endl;

    return 0;
}