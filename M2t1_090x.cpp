//CSC 134
//M2t1 - Product Sale
// Ramirez
//09/18/25
// "Checkout machine"

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //variables
    string first_name, last_name, full_name; //Costumer information
    string product = "avocados"; 
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;

    //Greet the costumer.
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    //How much do they want to purchase?

    cout << "How many " << product << " would you like to buy for today? ";
    cin >> amount_purchased;

    //Total price

    total_cost = amount_purchased * cost_each;

    //Results 

    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you " << full_name << " for shopping with us!" << endl;  


    return 0; 




}