//Lab14-2.cpp
// Program that allows the user to enter the sales values for a number of people
// and save them to a text file or calculate total sales based on data save in a text file
//Created by Sultan Alkubaisi on 18th October 2020

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Declare the function prototypes
int getChoice();
void addRecords();
void displayTotal();

int main() {

    //Declare the variables
    int choice = 0;

    do {

        choice = getChoice();

        if (choice == 1)
        {
            addRecords();
        }
        else if (choice == 2)
        {
            displayTotal();
        }
    }
    while (choice != 3);

    return 0;
}

//Define the get choice function
int getChoice()
{
    //Declare the required variables
    int menuChoice = 0;

    //Display the prompts and receive the input
    cout << endl << "Menu Options" << endl;
    cout << "1 Add Records" << endl;
    cout << "2 Display Total Sales" << endl;
    cout << "3 Exit" << endl;
    cout << "Choice (1, 2, or 3)? ";
    cin >> menuChoice;
    cin.ignore(100, '\n');
    cout << endl;

    return menuChoice;
}

//Define the add records methods
void addRecords()
{
    //Declate the required variables
    string name = "";
    int sales = 0;
    ofstream outFile;

    //Open the file for append
    outFile.open("sales.txt", ios::app);

    //If file open is successful get the sales person's name
    // and sales amount the write information to a file;
    //Otherwise display an error message
    if (outFile.is_open())
    {
        cout << "Salesperson's name (X to stop): ";
        getline(cin, name);

        while (name != "X" && name != "x")
        {
            cout << "Sales: ";
            cin >> sales;
            cin.ignore(100, '\n');

            //Output the data to the file
            outFile << name << "#" << sales << endl;

            cout << "Salesperson's name (X to stop): ";
            getline(cin, name);
        }

        //Close the file
        outFile.close();
    }
    else
    {
        cout << "sales.txt could not be opened" << endl;
    }
}

//Define the display total method
void displayTotal()
{
    //Declare the required variables
    string name = "";
    int sales = 0;
    int total = 0;
    ifstream inFile;

    //Open the file for input
    inFile.open("sales.txt");

    //If the file open was successful, read the salesperson's name
    //sales amount, then add the sales amount to the accumulator and
    //the display the accumulator; otherwise display the error message
    if (inFile.is_open())
    {
        getline(inFile, name, '#');
        inFile >> sales;
        inFile.ignore();

        while (! inFile.eof())
        {
            total += sales;
            getline(inFile, name, '#');
            inFile >> sales;
            inFile.ignore();
        }

        //Close the file
        inFile.close();
        cout << "Total sales $" << total << endl << endl;
    }
    else
    {
        cout << "sales.txt file could not be opened" << endl;
    }
}