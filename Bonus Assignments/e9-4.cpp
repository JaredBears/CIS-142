/*
Instructions
Write a program to help a local restaurant automate its breakfast billing system. The program should do the following:

Show the customer the different breakfast items offered by the restaurant.
Allow the customer to select more than one item from the menu.
Calculate and print the bill.
Assume that the restaurant offers the following breakfast items (the price of each item is shown to the right of the item):

food	Price
Plain Egg	$1.45
Bacon and Egg	$2.45
Muffin	$0.99
French Toast	$1.99
Fruit Basket	$2.49
Cereal	$0.69
Coffee	$0.50
Tea	$0.75
Use an array menuList of type menuItemType, as defined in Programming Exercise 3. Your program must contain at least the following functions:

Function getData: This function loads the data into the array menuList.
Function showMenu: This function shows the different items offered by the restaurant and tells the user how to select the items.
Function printCheck: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.)
A sample output is:

Welcome to Johnny's Resturant
----Today's Menu----
1: Plain Egg       $1.45
2: Bacon and Egg   $2.45
3: Muffin          $0.99
4: French Toast    $1.99
5: Fruit Basket    $2.49
6: Cereal          $0.69
7: Coffee          $0.50
8: Tea             $0.75

You can make up to 8 single order selections
Do you want to make selection Y/y (Yes), N/n (No): Y

Enter item number: 1

Select another item Y/y (Yes), N/n (No): Y

Enter item number: 2

Select another item Y/y (Yes), N/n (No): N

Welcome to Johnny's Resturant
Plain Egg       $1.45
Bacon and Egg   $2.45
Tax             $0.20
Amount Due      $4.10
Format your output with two decimal places. The name of each item in the output must be left justified. You may assume that the user selects only one item of a particular type.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void getData(menuItemType menuList[]);
void showMenu(menuItemType menuList[]);
void selectItems(menuItemType menuList[], int selections[]);
void printCheck(menuItemType menuList[], int selections[], int numSelections);

int main()
{
    menuItemType menuList[8];
    getData(menuList);
    showMenu(menuList);
    return 0;
}

void getData(menuItemType menuList[])
{
    menuList[0].menuItem = "Plain Egg";
    menuList[0].menuPrice = 1.45;
    menuList[1].menuItem = "Bacon and Egg";
    menuList[1].menuPrice = 2.45;
    menuList[2].menuItem = "Muffin";
    menuList[2].menuPrice = 0.99;
    menuList[3].menuItem = "French Toast";
    menuList[3].menuPrice = 1.99;
    menuList[4].menuItem = "Fruit Basket";
    menuList[4].menuPrice = 2.49;
    menuList[5].menuItem = "Cereal";
    menuList[5].menuPrice = 0.69;
    menuList[6].menuItem = "Coffee";
    menuList[6].menuPrice = 0.50;
    menuList[7].menuItem = "Tea";
    menuList[7].menuPrice = 0.75;
}

void showMenu(menuItemType menuList[])
{
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << "----Today's Menu----" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << i + 1 << ": " << menuList[i].menuItem << " $" << menuList[i].menuPrice << endl;
    }
    cout << "You can make up to 8 single order selections" << endl;
    cout << "Do you want to make selection Y/y (Yes), N/n (No): ";

    char selection;
    cin >> selection;
    if (selection == 'Y' || selection == 'y')
    {
        int selections[8] = {0};
        selectItems(menuList, selections);
    } else {
        cout << "Goodbye!" << endl;
    }
}

void selectItems(menuItemType menuList[], int selections[])
{
    int numSelections = 0;
    int selection;
    do
    {
        cout << "Enter item number: ";
        cin >> selection;
        selections[numSelections] = selection;
        numSelections++;
        cout << "Select another item Y/y (Yes), N/n (No): ";
        char anotherSelection;
        cin >> anotherSelection;
        if (anotherSelection == 'N' || anotherSelection == 'n')
        {
            break;
        }
    } while (numSelections < 8);
    printCheck(menuList, selections, numSelections);
}

void printCheck(menuItemType menuList[], int selections[], int numSelections)
{
    double total = 0;
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < numSelections; i++)
    {
        cout << menuList[selections[i] - 1].menuItem << " $" << menuList[selections[i] - 1].menuPrice << endl;
        total += menuList[selections[i] - 1].menuPrice;
    }
    double tax = total * 0.05;
    cout << "Tax $" << tax << endl;
    cout << "Amount Due $" << total + tax << endl;
}