//Introductory20.cpp
// Program that allows us to calculate the shipping charge for a region
// based on the region name provided by the user
//Created by Sultan Alkubaisi on 11th October 2020

#include <iostream>
#include <string>

using namespace std;

int validateRegionCode(string regionCode);

int main() {
    //Declare the variables
    string regionCode = "";
    const double REGION_A_CHARGE = 25;
    const  double REGION_B_CHARGE = 30;
    double shippingCharge = 0.0;

    //Receive the user input
    cout << "Enter the region code (or 0 to exit): ";
    getline(cin, regionCode);

    while (regionCode != "0")
    {
        //Call the validate region code method to validate
        if (validateRegionCode(regionCode) == 1)
        {
            if(regionCode.substr(0, 1) == "A")
            {
                shippingCharge = REGION_A_CHARGE;
            }
            else
            {
                shippingCharge = REGION_B_CHARGE;
            }

            cout << "The Shipping Charge for Region " << regionCode << " is $" << shippingCharge << endl;
        }
        else
        {
            cout << "The region code provided is invalid." << endl;
            cout << "A correct region code should contain exactly 3 characters: a letter (either A or B) "
                    "followed by two numbers" << endl << endl;
        }

        cout << "Enter the region code (or 0 to exit): ";
        getline(cin, regionCode);
    }

    return 0;
}

//Define the validate region code function
int validateRegionCode(string regionCode)
{
    string testCharacter = "";
    int verdict = 1;

    //Iterate through each character while checking if valid
    for (int x = 0; x < regionCode.length() ; x += 1)
    {
        testCharacter = regionCode.substr(x, 1);

        //Validate the first character to be A or B
        if(x == 0)
        {
            if(testCharacter != "A" and testCharacter != "B")
            {
                verdict = 0;
                break;
            }
        }
        else
        {
            if (testCharacter < "0" or testCharacter > "9")
            {
                verdict =  0;
                break;
            }
        }
    }

    return verdict;
}




