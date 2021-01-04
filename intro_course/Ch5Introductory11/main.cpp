//Ch5Introductory11.cpp
// Displays the total coffee cost for a customer when given the pounds of coffee bought,
// price per pound and whether to charge tax on customer
//Created by Sultan Alkubaisi on 13th September 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //declare the variables
    int coffeePounds = 0;
    double pricePerPound = 0.0;
    char chargeTax = ' ';
    const double TAX_RATE = 0.035;
    double totalCost = 0.0;

    //Enter the input items
    cout << "Enter the number of pounds of coffee ordered:";
    cin >> coffeePounds;
    cout << "Enter the price per pound of coffee:";
    cin >> pricePerPound;
    cout << "Should the customer be charged tax (Y/N)?";
    cin >> chargeTax;

    //Calculate the total cost before tax
    totalCost = coffeePounds * pricePerPound;

    //Evaluate whether to charge tax or not
    if (toupper(chargeTax) == 'Y')
        totalCost += totalCost * TAX_RATE;
    //end if

    cout << fixed << setprecision(2);
    cout << "Total amount owed by customer is: " << totalCost << endl;

    return 0;
}
