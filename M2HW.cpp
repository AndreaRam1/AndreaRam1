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
    cout << "Last, enter the amount to withdraw: $";
    cin >> withdrawalAmount;

    //Calculations

    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Results

    cout << "Name on account: " << customerName << endl;
    cout << "Account number: " << acountNumbre << endl;
    cout << "Final balance: $" << finalBalance << endl;


    //Question #2: General Crates Update

    cout << "======================================" << endl;
    cout << "=============Question 2===============" << endl;
    cout << "=========General Crates Update========" << endl;

    /* Updating the code M2LA 
    update values per constant */
    
    const double BUILD_COST_RATE = 0.30;
    const double CUSTOMER_RATE = 0.52;

    double crateLength, crateWidth, crateHeight, crateVolume, totalBuildCost, totalCharge, totalProfit;

    cout << "Enter the dimensions of the crate in feet" << endl;
    cout << "Lenght: ";
    cin >> crateLength; 
    cout << "Width: ";
    cin >> crateWidth;
    cout << "Height: ";
    cin >> crateHeight;

     //Calculations

    crateVolume = crateLength * crateWidth * crateHeight; // Volume
    totalBuildCost = crateVolume * BUILD_COST_RATE; // build cost
    totalCharge = crateVolume * CUSTOMER_RATE; //charge
    totalProfit = totalCharge - totalBuildCost; // profit

    // Results

    cout << "The volume of the crate is " << crateVolume << " cubic feet." << endl; 
    cout << "Cost to build: $" << totalBuildCost << endl;
    cout << "Charge to custmer: $" << totalCharge << endl;
    cout << "Profit: $" << totalProfit << endl;

    //Question #3: Pizza party

    cout << "======================================" << endl;
    cout << "=============Question 3===============" << endl;
    cout << "============Pizza party===============" << endl;

    

    

    return 0;

}