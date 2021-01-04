//Introductory19.cpp
// Program that allows a user to enter the payroll amounts for a company
// and save them on a payroll text file
//Created by Sultan Alkubaisi on 18th October 2020

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    //Declare the variables
    double amount = 0.0;
    ofstream outFile;

    //Set precision
    outFile << fixed << setprecision(2);

    //Open the text file for appending
    outFile.open("Introductory19.txt", ios::app);

    //Verify if file is open before attempting to write
    if (outFile.is_open())
    {
        //Prompt user to enter a payroll amount
        cout << "Enter a payroll amount (or negative number to exit): ";
        cin >> amount;

        while (amount >= 0)
        {
            //Output the entered amount to file
            outFile << amount << endl;

            //Prompt user to enter a payroll amount
            cout << "Enter a payroll amount (or negative number to exit): ";
            cin >> amount;
        }

        //Close the file
        outFile.close();
    }
    else
    {
        cout << "Introductory19.txt file could not be opened" << endl;
    }

    return 0;
}
