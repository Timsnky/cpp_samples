//Introductory21.cpp
// Program that receives a person address details ie city, state and zip
// and displays the corresponding details as one string
//Created by Sultan Alkubaisi on 11th October 2020

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Declare the variables
    string city = "";
    string state = "";
    string zip = "";
    int choice = 0;
    string address = "";

    //Receive the user input
    cout << "Enter the 1 to add new details or 0 to exit: ";
    cin >> choice;

    while (choice == 1)
    {
        cout << "Enter the city name: ";
        getline(cin.ignore(100, '\n'), city);
        cout << "Enter the state name: ";
        getline(cin, state);
        cout << "Enter the zip code: ";
        getline(cin, zip);

        //Concatenate the address details
        address = city + ", " + state + "  " + zip;

        //Display the concatenated details
        cout << "You details are : " << address << endl << endl;

        cout << "Enter the 1 to add new address details or 0 to exit: ";
        cin >> choice;
    }

    return 0;
}
