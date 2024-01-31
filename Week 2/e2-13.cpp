#include <iostream>

using namespace std;

int main() {

    double originalPrice, markupPercentage, salesTaxRate, sellingPrice, salesTax, finalPrice;
    cout << "Enter the original price of the item sold: ";
    cin >> originalPrice;
    cout << "\nEnter the percentage of the marked-up price: ";
    cin >> markupPercentage;
    cout << "\nEnter the sales tax rate: ";
    cin >> salesTaxRate;

    sellingPrice = originalPrice + (originalPrice * (markupPercentage / 100));
    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;

    cout << "\nOriginal price of the item: " << originalPrice;
    cout << "\nPercentage of the mark-up: " << markupPercentage;
    cout << "\nStore's selling price of the item: " << sellingPrice;
    cout << "\nSales tax rate: " << salesTaxRate;
    cout << "\nSales tax: " << salesTax;
    cout << "\nFinal price of the item: " << finalPrice << endl;
    return 0;
}