//Introductory20.cpp
// Program that allows a user to enter the prices of items
// and saves the prices in a text file
//Created by Sultan Alkubaisi on 18th October 2020

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    //Declare the variables
    double price = 0.0;
    ofstream outFile;

    //Set precision
    outFile << fixed << setprecision(2);

    //Open the text file for appending
    outFile.open("Introductory20.txt", ios::app);

    //Verify if file is open before attempting to write
    if (outFile.is_open())
    {
        //Prompt user to enter a price value
        cout << "Enter a price value (or negative number to exit): ";
        cin >> price;

        while (price >= 0)
        {
            //Output the entered price to file
            outFile << price << endl;

            //Prompt user to enter a price value
            cout << "Enter a price value (or negative number to exit): ";
            cin >> price;
        }

        //Close the file
        outFile.close();
    }
    else
    {
        cout << "Introductory20.txt file could not be opened" << endl;
    }

    return 0;
}
