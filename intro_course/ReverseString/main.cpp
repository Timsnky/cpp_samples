//Introductory21.cpp
// Program that receives a string input and reverses the string
//Created by Sultan Alkubaisi on 11th October 2020

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Declare the variables
    string originalString = "";
    string reversedString = "";

    //Receive the user input
    cout << "Enter the string you wish to reverse: ";
    getline(cin, originalString);

    //Reverse the string by iterating through each character in reverse order
    for (int x = originalString.length() - 1; x >= 0; x -= 1)
    {
        reversedString += originalString.substr(x, 1);
    }

    //Display the reversed string
    cout << "The reverse for the entered string is: " << endl << reversedString << endl;

    return 0;
}
