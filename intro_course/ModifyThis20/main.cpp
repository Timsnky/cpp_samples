//ModifyThis20.cpp
// Displays the highest and lowest numbers from a supplied array
//Created by Sultan Alkubaisi on 4th October 2020

#include <iostream>

using namespace std;

//Declare the function prototypes
int getHighest(int numArray[], int numElements);
int getLowest(int numArray[], int numElements);

int main() {
    //Declare the variables
    int numbers[4] = {13, 2, 40, 25};

    //Call the functions and display their output
    cout << "The highest number in the array is " << getHighest(numbers, 4) << endl;
    cout << "The lowest number in the array is " << getLowest(numbers, 4) << endl;

    return 0;
}

//Define the get highest function
int getHighest(int numArray[], int numElements)
{
    //Assign the first element's value to the high variable
    int high = numArray[0];

    //Begin search with second element
    for (int sub = 1; sub < numElements; sub += 1)
    {
        if (numArray[sub] > high)
        {
            high = numArray[sub];
        }
    }

    return high;
}

//Define the get lowest function
int getLowest(int numArray[], int numElements)
{
    //Assign the first element's value to the low variable
    int low = numArray[0];

    //Begin search with second element
    for (int sub = 1; sub < numElements; sub += 1)
    {
        if (numArray[sub] < low)
        {
            low = numArray[sub];
        }
    }

    return low;
}
