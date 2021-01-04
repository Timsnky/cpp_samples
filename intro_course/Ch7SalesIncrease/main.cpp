//Ch7Lab7-2.cpp
// Calculates the number of years a company takes to reach 150000 given a
// starting sales amount and grosth rate of 5.5%. Also displays the sales at the
// end of the iteration
//Created by Sultan Alkubaisi on 15th September 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //declare the variables
    const double GROWTH_RATE = 0.055;
    double sales = 0.0;
    double annualIncrease = 0.0;
    int years = 0;

    //Enter the starting sales
    cout << "Enter current year sales: ";
    cin >> sales;

    //Iterate while incrementing sales by growth rate
    while (sales <= 150000)
    {
        annualIncrease = sales * GROWTH_RATE;
        sales += annualIncrease;

        years += 1;
    } //end while

    //Display output
    cout << fixed << setprecision(0);
    cout << "Sales " << years << " years from now: $" << sales << endl;

    return 0;
}
