//Lab13-2.cpp
// Program to allow two users to play the guess the word game where a user
// enters a word and another user attempts the guess the entered word
//Created by Sultan Alkubaisi on 11th October 2020

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Declare the variables
    string origWord = "";
    string letter = "";
    char dashReplaced = 'N';
    char gameOver = 'N';
    int numIncorrect = 0;
    string displayWord = "-----";

    //Get the original word
    while (origWord.length() != 5)
    {
        cout << "Enter a 5-letter word in uppercase: ";
        getline(cin, origWord);
    }

    //Clear the screen
    system("cls");

    //Start guessing
    cout << "Guess this word: " << displayWord << endl;
    while (gameOver == 'N')
    {
        cout << "Enter an uppercase letter: ";
        cin >> letter;

        //Search for the letter in the original word
        for (int x = 0; x < 5; x += 1)
        {
            //If the current character matches the letter, replace the corresponding
            //dash in the displayWord variable and then set the dashReplaced variable to 'Y'
            if (origWord.substr(x, 1) == letter)
            {
                displayWord.replace(x, 1, letter);
                dashReplaced = 'Y';
            }
        }

        //If a dash was replaced, check whether the displayWord variable contains another dash
        if (dashReplaced == 'Y')
        {
            //if the displayWord variable does not contain any dashes, the game is over
            if (displayWord.find("-", 0) == -1)
            {
                gameOver = 'Y';
                cout << endl << "Yes, the word is " << origWord << endl;
                cout << "Great guessing!" << endl;
            }
            else
            {
                cout << endl << "Guess this word: " << displayWord << endl;
                dashReplaced = 'N';
            }
        }
        else
        {
            //Add 1 to the number of incorrect guesses
            numIncorrect += 1;

            //If number of incorrect guesses is 10 the game is over
            if (numIncorrect == 10)
            {
                gameOver = 'Y';
                cout << endl << "Sorry, the word is " << origWord << endl;
            }
        }
    }

    return 0;
}
