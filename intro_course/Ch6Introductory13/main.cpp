//Ch6Introductory13.cpp
// Displays the total attendance cost of company employees depending on the
// number of peope entered as attending or error message for invalide number of people
//Created by Sultan Alkubaisi on 13th September 2020

#include <iostream>

using namespace std;

int main() {
    //Declare the variables
    int people = 0;
    double feePerPerson = 0.0;
    double totalCost = 0.0;

    //Enter the input items
    cout << "Enter the number of people registered:";
    cin >> people;

    //Evaluate number of people to get fee per person
    if (people >= 1 && people <= 5) {
        feePerPerson = 125;
    } else if (people >= 6 && people <= 20) {
        feePerPerson = 100;
    } else if (people >= 21) {
        feePerPerson = 75;
    } else {
        feePerPerson = -1;
    }

    //Evaluate fee per person to get cost and display total cost or error message
    if (feePerPerson == -1) {
        cout << "Invalid number of people";
    } else {
        totalCost = people * feePerPerson;
        cout << "Total Cost: " << totalCost << endl;
    }

    return 0;
}
