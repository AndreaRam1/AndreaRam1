/* CSC 134
M3LAB2
Andrea Ramirez
10/06/25
Grade coversion program*/ 

#include <iostream>
using namespace std;

int main() {
    // Variables 
    int grade;
    
    // instructins to the user: Enter a numerical grade

    cout << "Please enter your numerical grade: ";
    cin >> grade;

    // Validation of the grade
    
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a number between 0 and 100." << endl;
        return 1; // For invalid input exit te program
    }
    char lettergrade; // variable for the letter grade

    // Make the conversion 
    if (grade >= 90 && grade <= 100) {
        lettergrade = 'A';
    }
    else if (grade >= 80 && grade <=89) {
        lettergrade = 'B';
    }
    else if (grade >= 70 && grade <=79) {
        lettergrade = 'C';
    }
    else if (grade >=60 && grade <=69) {
        lettergrade = 'D';
    }
    else {
        lettergrade = 'F'; //any number between 0 and 59
    }

    // Results
    cout << "Your letter grade is: " << lettergrade << endl;

    return 0;
}
