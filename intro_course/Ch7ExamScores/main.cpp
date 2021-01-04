//Ch7Introductory19.cpp
// Allows a teacher to enter scores for multiple students and show the
// appropriate grade as per the cumulative score
//Created by Sultan Alkubaisi on 16th September 2020

#include <iostream>
using namespace std;

int main() {
    //declare the variables
    double midtermScore = 0.0;
    double finalScore = 0.0;
    double totalScore = 0.0;
    char grade = ' ';
    int numberOfStudents = 0;

    //Enter the starting value of number of students
    cout << "Enter the number of students you wish to enter their scores:";
    cin >> numberOfStudents;

    //iterate until the number is zero
    while (numberOfStudents > 0)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Enter the student midterm score:";
        cin >> midtermScore;
        cout << "Enter the student final score:";
        cin >> finalScore;


        if(midtermScore < 0 || midtermScore > 200)      //Validate correct midterm score
        {
            grade = 'Y';
        } else if(finalScore < 0 || finalScore > 200)       //Validate correct final score
        {
            grade = 'Z';
        } else {
            totalScore = midtermScore + finalScore;

            //Evaluate total score to determine grade
            if(totalScore >= 360 && totalScore <= 400)
            {
                grade = 'A';
            } else if(totalScore >= 320 && totalScore <= 359)
            {
                grade = 'B';
            } else if(totalScore >= 280 && totalScore <= 319)
            {
                grade = 'C';
            } else if (totalScore >= 240 && totalScore <= 279)
            {
                grade = 'D';
            } else
            {
                grade = 'F';
            }
        }

        if (grade == 'Y')       //Show message when incorrect midterm score is entered
        {
            cout << "You have entered an invalid midterm score" << endl;
        } else if (grade == 'Z')        //Show message when incorrect final score is entered
        {
            cout << "You have entered an invalid final test score" << endl;
        } else
        {
            cout << "Student Total Score: " << totalScore << endl;
            cout << "Student Grade: " << grade << endl;

            //Decrease the number of students counter only when the teacher has entered
            //correct grades to allow for re-entry of correct values
            numberOfStudents -= 1;
        }

        cout << "-----------------------------------------------" << endl;
    }

    return 0;
}
