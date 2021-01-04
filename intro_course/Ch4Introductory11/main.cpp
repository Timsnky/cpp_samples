//Ch4Introductory11.cpp
// Displays the closing balance of an account when given beginning balance, deposits and withdrawals
//Created by Sultan Alkubaisi on 6th September 2020

#include <iostream>
using namespace std;

int main() {
    //declare the variables
    double beginningBalance = 0.0;
    double deposits = 0.0;
    double withdrawals = 0.0;
    double closingBalance = 0.0;

    //Enter the input items
    cout << "Enter the beginning account balance:";
    cin >> beginningBalance;
    cout << "Enter the total deposits:";
    cin >> deposits;
    cout << "Enter the total withdrawals:";
    cin >> withdrawals;

    //Calculate the closing balance
    closingBalance = beginningBalance + deposits - withdrawals;

    //Display the output
    cout << "Closing Balance: " << closingBalance << endl;

    return 0;
}
