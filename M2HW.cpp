/*
CSC134
M2HW1 - Gold
Andrea Ramirez
12/02/25

This program contains the solutions for the 4 questions.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    cout << setprecision(2) << fixed << showpoint; // Money output

    // Question #1 : Banking Simulation 

    cout << "=================================" << endl; 
    cout << "===========Question 1============" << endl; 
    cout << "========Banking Simulation=======" << endl;

    string customerName;
    double startingBalance, depositAmount, withdrawalAmount, finalBalance;
    int acountNumbre = 41651537;

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, customerName); // Spaces in names
    cout << "Please first enter starting account balance: $";
    cin >> startingBalance;
    cout << "Second enter the amount of the deposit: $";
    cin >> depositAmount;
    cout << "Last, enter the amoun to withdraw: $";
    cin >> withdrawalAmount;

    //Calculations

    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Results

    cout << "Name on account: " << customerName << endl;
    cout << "Account number: " << acountNumbre << endl;
    cout << "Final balance: $" << finalBalance << endl;
    


}