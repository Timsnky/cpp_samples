//Lab12-2.cpp
// Display the shipping charges for the number of items ordered based
// on charge values stored in a multi-dimensional array
//Created by Sultan Alkubaisi on 4th October 2020

#include <iostream>

using namespace std;

int main() {

    //Define the variables
    int numOrdered = 0;
    int shipCharges[3][2] = {{50, 20}, {100, 10}, {999999, 0}};
    int rowSub = 0;

    //Receive the user input
    cout << "Number ordered (negative number or 0 to end): ";
    cin >> numOrdered;

    //Iterate till incorrect input supplied
    while (numOrdered > 0 && numOrdered <= 999999)
    {
        rowSub = 0;

        while (rowSub < 3 && numOrdered > shipCharges[rowSub][0])
        {
            rowSub += 1;
        }

        //Display the shipping charge
        cout << "Shipping charge for a quantity of " << numOrdered << " is $" << shipCharges[rowSub][1] << endl << endl;

        //Receive fresh input
        cout << "Number ordered (negative number or 0 to end): ";
        cin >> numOrdered;
    }

    return 0;
}
