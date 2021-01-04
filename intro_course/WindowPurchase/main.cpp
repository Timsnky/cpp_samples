//Lab10-2.cpp
// Displays the total purchase cost for windows depending on the
// selected pricing option
//Created by Sultan Alkubaisi on 27th September 2020

#include <iostream>
#include <iomanip>

using namespace std;

//Define the function prototypes
void displayOptions();
void getRegular(int windows, double price, double &total);
void getBoGo(int windows, double price, double &total);

int main() {

    //Define the variables
    int option = 0;
    int numOrdered = 0;
    double winPrice = 0.0;
    double totalOwed = 0.0;

    cout << fixed <<setprecision(2);

    //Invoke the display options function
    displayOptions();

    //Receive input from the user
    cout << "Pricing option?";
    cin >> option;
    if (option == 1 || option == 2)
    {
        cout << "Number of windows:";
        cin >> numOrdered;
        cout << "Price per window:";
        cin >> winPrice;
        if (option == 1)
        {
            getRegular(numOrdered, winPrice, totalOwed);
        }
        else
        {
            getBoGo(numOrdered, winPrice, totalOwed);
        }
        cout << "Total owed: $" << totalOwed << endl;
    }
    else
    {
        cout << "Invalid option" << endl;
    }

    return 0;
}

//Define the display options function
void displayOptions()
{
    cout << "Pricing options:" << endl;
    cout << "1. Regular pricing" << endl;
    cout << "2. BOGO Pricing" << endl;
}

//Define the get regular function
void getRegular(int windows, double price, double &total)
{
    total = windows * price;
}

//Define the get bogo function
void getBoGo(int windows, double price, double &total)
{
    total = (windows / 2 + windows % 2) * price;
}