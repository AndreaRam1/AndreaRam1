// CSC 134
//M1LAB
//Andrea Ramirez Cabello 
//09/10/2025

#include <iostream>
using namespace std;

int main() {
    //This program will simulate an apple orchard.
    //Owner's Name 
    string name = "Jane Smith";
    //Number of apples
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;
    cout <<"Welcome to "<< name; 
    cout <<"'s apple orchard."<< endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Price is $" << pricePerApple << " each." << endl;
    // Total price 
    double totalPrice = (double) apples * pricePerApple;
    cout << totalPrice;
    cout << "If you want them all, that will be $" << totalPrice << endl;

    return  0; 
}