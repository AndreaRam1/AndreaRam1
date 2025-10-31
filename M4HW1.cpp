/*CSC 134
M4HW1 -- Gold
Andrea Ramirez Cabello 
10/31/2025

This program prints multiplication tables (times tables) using loops.
It includes three parts:
   1. Bronze: Prints the 5 times table using a for loop.
   2. Silver: Asks the user for a number (1–12) and prints its table.
   3. Gold: Adds input validation so the user must enter a valid number.*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select which version to run:\n";
    cout << "1. Bronze \n";
    cout << "2. Silver \n";
    cout << "3. Gold \n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // ----- BRONZE -----
        int number = 5;
        for (int i = 1; i <= 12; i++) {
            cout << number << " times " << i << " is " << number * i << "." << endl;
        }
    }

    else if (choice == 2) {
        // ----- SILVER -----
        int number;
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        for (int i = 1; i <= 12; i++) {
            cout << number << " times " << i << " is " << number * i << "." << endl;
        }
    }

    else if (choice == 3) {
        // ----- GOLD -----
        int number;
        do {
            cout << "Enter a number from 1 to 12: ";
            cin >> number;
            if (number < 1 || number > 12) {
                cout << "Invalid entry. Please enter a number between 1 and 12." << endl;
            }
        } while (number < 1 || number > 12);

        for (int i = 1; i <= 12; i++) {
            cout << number << " times " << i << " is " << number * i << "." << endl;
        }
    }

    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}