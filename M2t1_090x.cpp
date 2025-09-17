//CSC 134
//M2T1 - Product Sales 
// Ramirez
// 9/17/25
//"CheckOut Machine"
#include <iostream>
using namespace std;

int main() {

    //Set Up Variables
    string first_name, last_name, full_name; // Info. Costumer
    string product = "Avocados"; 
    double cost_each = 0.99;
    double total_cost;

    // Costumer
    cout << "Welcome to our " << product << " store" << endl;
    cout << "What is your first name? ";
    cin  >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    return 0;



}