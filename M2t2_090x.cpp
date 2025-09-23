/*
CSC 134
M2t2 - Receip CAalculator
Ramirez
9/23/25
*/

#include <iostream>
#include <iomanip>   // 2 decimals places

using namespace std;

int main() {
    //Purpose: Create a simple receipt that can handle sales tax (8%)

    //Variables
    string item = "Ramen🍜";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% 
    double tax_amount;
    double total;

    //Greet costumer and take order
    cout << "Welcome to our CSC 134 Ramen Restaurant!!" << endl;
    cout << "You orderer one " << item << "." << endl;

    // Claculate the price, sales tax and the total price
    tax_amount = item_price * tax_percent; // Take the 8% of the item
    total = item_price + tax_amount;
    
    // Print the receipt
    cout << setprecision(2) << fixed;
    cout << total << endl;


    return 0; 



}