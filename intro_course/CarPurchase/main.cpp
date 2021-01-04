//Lab9-2.cpp
// Displays the monthly payments when purchasing a car from a dealer
// when a customer chooses to use credit union financing or dealer financing
//Created by Sultan Alkubaisi on 27th September 2020

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double getPayment(int, double, int);

int main() {

    //Declate the variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    //Receive inputs from user
    cout << "Enter the Car price (after any trade-in):";
    cin >> carPrice;
    cout << "Enter the Rebate:";
    cin >> rebate;
    cout << "Enter the Credit union rate:";
    cin >> creditRate;
    cout << "Enter the Dealer rate: ";
    cin >> dealerRate;
    cout << "Enter the term in years:";
    cin >> term;

    //Call the get payment function to calculate the monthly payments
    creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);

    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

    //Display the monthly payment for the two options
    cout << "Credit union payment: $" << creditPayment << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;

    return 0;
}

//Get payment function which calculate the monthly payment based on the provided
//principal, monthly rate and number of months and returns the calculated value
double getPayment(int principal, double monthRate, int months)
{
    double monthPay = 0.0;

    monthPay = principal * monthRate / (1 - pow(monthRate + 1, -months));

    return monthPay;
}
