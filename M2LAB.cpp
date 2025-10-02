//CSC 134
//M2LAB
//Andrea Ramirez
// 10/02/25
// This program calculates the volume, cost, charge and profit
// In this program the user is asked to enter the crate's dimensions
//Calculate the volume of a cube

//------------------------------------------
#include <iostream>
#include <iomanip> // setprecsion fixed
using namespace std;


int main() {
    // Defined constants (cost and charge)
    const double BUILD_COST_RATE = 0.23;
    const double CUSTOMER_RATE = 0.50;

    // Defined variables
    double crateLength, crateWidth, crateHeight, crateVolume, totalBuildCost, totalCharge, totalProfit;
    cout << setprecision(2) << fixed << showpoint;

    // User input
    cout << "Enter the simensions o fthe crate in feet: " << endl;
    cout << "Lenght: " << endl;
    cin >> crateLength; 
    cout << "Width: " << endl;
    cin >> crateWidth;
    cout << "Height: " << endl;
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

    return 0;


}