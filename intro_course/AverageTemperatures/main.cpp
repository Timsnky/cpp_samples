//Intermediate23.cpp
// Displays the average high temperature and low temperature based
// on temperature data stored in a multi-dimensional array
//Created by Sultan Alkubaisi on 4th October 2020

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Declare the variables
    int temparatures[7][2] = {{95, 67}, {98, 54}, {86, 70}, {99, 56}, {83, 34}, {75, 68}, {80, 45}};
    double totalHighTemperature = 0.0;
    double totalLowTemparature = 0.0;

    //Iterate for the number of days while cumulating the temparatures
    for (int x = 0; x < 7; x += 1)
    {
        totalHighTemperature += temparatures[x][0];
        totalLowTemparature += temparatures[x][1];
    }

    //Display the output
    cout << fixed << setprecision(1) << endl;
    cout << "Average High Temperature is " << totalHighTemperature / 7 << endl;
    cout << "Average Low Temperature is " << totalLowTemparature / 7 << endl;

    return 0;
}
