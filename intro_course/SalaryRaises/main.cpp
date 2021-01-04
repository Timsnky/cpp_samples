//Intermediate18.cpp
// Displays a annual raise for the next 3 years gven a starting salary
// Using annual raise rates of 3%, 4%, 5% and 6%
//Created by Sultan Alkubaisi on 17th September 2020

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //declare the variables
    double currentSalary = 0.0;     //Use -1 as the
    double newSalary = 0.0;
    double annualRaise = 0.0;

    cout << fixed << setprecision(2);

    //Enter the starting salary
    cout << "Enter your salary or -1 to terminate:";
    cin >> currentSalary;

    //Iterate until the sentinel value of -1 is entered
    while (currentSalary != -1)
    {
        for(double raiseRate = 0.03; raiseRate < 0.07; raiseRate += 0.01)
        {
            cout << "Calculating Using " << raiseRate * 100 << "% Raise Rate" << endl;

            newSalary = currentSalary;

            for(int year = 1; year < 4; year += 1)
            {
                annualRaise = newSalary * raiseRate;

                newSalary += annualRaise;

                cout << "Year " << year << ": Annual Raise: " << annualRaise << " ; New Salary: " << newSalary << endl;
            }
        }

        cout << endl;
        cout << "Enter your salary or -1 to terminate:";
        cin >> currentSalary;
    }

    return 0;
}
