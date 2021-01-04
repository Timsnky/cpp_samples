//Introductory16.cpp
// Display an employee total pay based on the number of
// hours worked and hourly rate
//Created by Sultan Alkubaisi on 27th September 2020

#include <iostream>
#include <iomanip>

using namespace std;

void getOption(char &option);
double getNormalPay(double hours, double hourlyRate);
double getOvertimePay(double hours, double hourlyRate, double overtimeRate);

int main() {
    //Define the variables and constants
    char option = ' ';
    const double ONE_AND_HALF_RATE = 1.5;
    const double DOUBLE_RATE = 2.0;
    double hours = 0.0;
    double hourlyRate = 0.0;
    double totalPay = 0.0;

    //Get desired option from
    getOption(option);

    //Iterate until a different option is selected
    while (toupper(option) == 'Y')
    {
        //Receive the user input
        cout << "Enter the number of hours worked:";
        cin >> hours;
        cout << "Enter the hourly pay:";
        cin >> hourlyRate;

        if(hours >= 0 && hours <= 37)
        {
            totalPay = getNormalPay(hours, hourlyRate);
        }
        else if(hours > 37 && hours <= 50)
        {
            totalPay = getNormalPay(37, hourlyRate);
            totalPay += getOvertimePay(hours - 37, hourlyRate, ONE_AND_HALF_RATE);
        }
        else if(hours > 50)
        {
            totalPay = getNormalPay(37, hourlyRate);
            totalPay += getOvertimePay(50 - 37, hourlyRate, ONE_AND_HALF_RATE);
            totalPay += getOvertimePay(hours - 50, hourlyRate, DOUBLE_RATE);
        }
        else
        {
            totalPay = -1;
        }

        if (totalPay == -1)
        {
            cout << "Invalid number of hours worked" << endl;
        }
        else
        {
            cout << "Total Employee Pay: $" << totalPay << endl;
        }

        getOption(option);
    }

    return 0;
}

//Define the get option function
void getOption(char &option)
{
    cout << "Calculate Employee Pay, Y or N?";
    cin >> option;
}

//Define the get normal pay function
double getNormalPay(double hours, double hourlyRate)
{
    return hours * hourlyRate;
}

//Define the get overtime pay function
double getOvertimePay(double hours, double hourlyRate, double overtimeRate)
{
    return hours * hourlyRate * overtimeRate;
}
