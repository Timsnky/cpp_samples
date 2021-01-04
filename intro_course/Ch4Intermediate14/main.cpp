//Ch4Intermediate14.cpp
//Displays the total pizzas, percentage of small, medium, large and family pizzas to the
//total when provided with the number of small, medium, large and family pizzas sold
//Created by Sultan Alkubaisi on 6th September 2020

#include <iostream>
using namespace std;

int main() {
    //declare the variables
    int smallPizzas = 0;
    int mediumPizzas = 0;
    int largePizzas = 0;
    int familyPizzas = 0;
    int totalPizzas = 0;
    double smallPizzasPercentage = 0.0;
    double mediumPizzasPercentage = 0.0;
    double largePizzasPercentage = 0.0;
    double familyPizzasPercentage = 0.0;

    //Enter the input items
    cout << "Enter the number of small pizzas sold:";
    cin >> smallPizzas;
    cout << "Enter the number of medium pizzas sold:";
    cin >> mediumPizzas;
    cout << "Enter the number of large pizzas sold:";
    cin >> largePizzas;
    cout << "Enter the number of family pizzas sold:";
    cin >> familyPizzas;

    //Calculate the total pizzas
    totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;

    //Calculate the small pizzas percentage
    smallPizzasPercentage = static_cast<double>(smallPizzas) / totalPizzas * 100;

    //Calculate the medium pizzas percentage
    mediumPizzasPercentage = static_cast<double>(mediumPizzas) / totalPizzas * 100;

    //Calculate the large pizzas percentage
    largePizzasPercentage = static_cast<double>(largePizzas) / totalPizzas * 100;

    //Calculate the family pizzas percentage
    familyPizzasPercentage = static_cast<double>(familyPizzas) / totalPizzas * 100;

    //Display the output
    cout << "Total Pizzas Sold: " << totalPizzas << endl;
    cout << "Percentage of Small Pizzas to Total: " << smallPizzasPercentage << "%" << endl;
    cout << "Percentage of Medium Pizzas to Total: " << mediumPizzasPercentage << "%"  << endl;
    cout << "Percentage of Large Pizzas to Total: " << largePizzasPercentage << "%"  << endl;
    cout << "Percentage of Family Pizzas to Total: " << familyPizzasPercentage << "%"  << endl;

    return 0;
}
