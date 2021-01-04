//Lab11-2.cpp
// Displays the average and lowest running times for a 5k race
// when given 5 past running times
//Created by Sultan Alkubaisi on 4th October 2020

#include <iostream>
#include <iomanip>

using namespace std;

double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main() {
    //Declare the variables
    double finishTimes[5] = {0.0};
    double avgTime = 0.0;
    double lowestTime = 0.0;

    //Receive the user input
    for (int x = 0; x < 5; x += 1)
    {
        cout << "Time for race " << x + 1 << ":";
        cin >> finishTimes[x];
    }

    //Call the appropriate functions to get the values
    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);

    //Display the output
    cout << fixed << setprecision(1) << endl;
    cout << "Average 5K finish time: " << avgTime << endl;
    cout << "Lowest 5K finish time: " << lowestTime << endl;

    return 0;
}

//Calculate the average time
double getAverage(double times[], int numElements)
{
    double total = 0.0;

    for (int x = 0; x < numElements; x += 1)
    {
        total += times[x];
    }

    return total / numElements;
}

//Calculate the lowest time
double getLowest(double times[], int numElements)
{
    double lowest = times[0];

    for (int x = 1; x < numElements; x += 1)
    {
        if (times[x] < lowest)
        {
            lowest = times[x];
        }
    }

    return lowest;
}


