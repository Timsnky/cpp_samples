//IntroductoryI6.cpp
//Displays the square and cube of numbers from 10 to 13
//on a table
//Created by Sultan Alkubaisi on 27th September 2020

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Display the initial headers with tabs in between to give the spaces
    cout << "Number\tSquare\tCube" << endl;

    //Iterate through the numbers while calculating and displaying the square and cube
    for (int number = 10; number <= 13 ; ++number) {
        cout << number << "\t" << pow(number, 2) << "\t" << pow(number, 3) << endl;
    }

    return  0;
}
