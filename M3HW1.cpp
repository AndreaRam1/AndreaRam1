/*CSC 134
M3HW1 - Gold
Andrea Ramirez
10/14/25
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function declarations//
 void question1();
 void question2();
 void question3();
 void question4();

 int main() {
    int choice;
    bool keep_going = true;

    while (keep_going == true) {
        cout << "===========================" << endl;
        cout << "=====M3WH1 - Main Menu=====" << endl;
        cout << "===========================" << endl;
        cout << "1. Question 1 - Chat Bot............" << endl;
        cout << "2. Question 2 - Receip Ca;cullator.." << endl;
        cout << "3. QUESTION 3 - Choose your own andventure" << endl;
        cout << "4. Question 4 - Math Practice............." << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice" << endl;

        cin >> choice;

        if (choice == 1) {
            question1();
        }
        else if (choice == 2) {
            question2();
        }
        else if (choice == 3) {
            question3();
        }
        else if (choice == 4) {
            question4();
        }
        else if (choice == 0) {
            cout << "Goodbye!" << endl;
            keep_going = false;
        }
        else {
            cout << "Invalid choice. Please try again" << endl;

        }

    }
    return 0;
 }
 // -----------------------------------------
// Question 1: Chat Bot
// -----------------------------------------
void question1() {
    cout << "--- Question 1: Chat Bot ---" << endl;

    string answer;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no: ";
    cin >> answer;

    if (answer == "yes" || answer == "Yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no" || answer == "No") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }
}

// -----------------------------------------
// Question 2: Receipt Calculator
// -----------------------------------------
void question2() {
    // Purpose: Calculate meal cost with tax and optional tip for dine-in orders

    // Variables
    string item = "Ramen 🍜";
    double meal_price;
    double tax_percent = 0.08;  // 8% sales tax
    double tip_percent = 0.15;  // 15% tip for dine-in
    double tax_amount, tip_amount = 0.0, total;
    int order_type; // 1 = dine in, 2 = takeaway

    // Greet customer
    cout << "Welcome to the CSC 134 Ramen Restaurant!" << endl;
    cout << "Today's item: " << item << endl;

    // Get meal price
    cout << "Please enter the price of your meal: $";
    cin >> meal_price;

    // Ask dine-in or takeaway
    cout << "Please enter 1 if dining in, or 2 if taking away: ";
    cin >> order_type;

    // Calculate tax
    tax_amount = meal_price * tax_percent;

    // If dine-in, add tip
    if (order_type == 1) {
        tip_amount = meal_price * tip_percent;
    }

    // Calculate total
    total = meal_price + tax_amount + tip_amount;

    // Print receipt
    cout << fixed << setprecision(2);
    cout << "\n===== RECEIPT =====" << endl;
    cout << item << "\t\t$" << meal_price << endl;
    cout << "Tax (8%)" << "\t\t$" << tax_amount << endl;

    if (order_type == 1) {
        cout << "Tip (15%)" << "\t\t$" << tip_amount << endl;
    }

    cout << "------------------------" << endl;
    cout << "Total Due" << "\t\t$" << total << endl;
    cout << "========================" << endl;

    // Thank the customer
    cout << "\nThank you for visiting! See you soon!" << endl;
}

// -----------------------------------------
// Question 3: Choose Your Own Adventure
// -----------------------------------------
void question3() {
    cout << "\n--- Question 3: Choose Your Own Adventure ---\n";

    string choice1, choice2;

    cout << "You are standing in front of a dark cave." << endl;
    cout << "Do you ENTER or LEAVE? ";
    cin >> choice1;

    if (choice1 == "ENTER" || choice1 == "enter") {
        cout << "You step inside and see two tunnels." << endl;
        cout << "Do you go LEFT or RIGHT? ";
        cin >> choice2;

        if (choice2 == "LEFT" || choice2 == "left") {
            cout << "You find a treasure chest! You win!" << endl;
        }
        else if (choice2 == "RIGHT" || choice2 == "right") {
            cout << "A dragon appears! Game over." << endl;
        }
        else {
            cout << "You get lost in the dark. Game over." << endl;
        }
    }
    else if (choice1 == "LEAVE" || choice1 == "leave") {
        cout << "You walk away safely. The end." << endl;
    }
    else {
        cout << "You hesitate too long and night falls. Game over." << endl;
    }
}

// -----------------------------------------
// Question 4: Math Practice
// -----------------------------------------
void question4() {
    cout << "\n--- Question 4: Math Practice ---\n";

    srand(time(0)); // Semilla para generar números aleatorios
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        int a = rand() % 10;
        int b = rand() % 10;
        int userAnswer;

        cout << "What is " << a << " + " << b << "? ";
        cin >> userAnswer;

        if (userAnswer == a + b) {
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect. The correct answer is " << (a + b) << "." << endl;
        }

        cout << "Would you like another problem? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye! Keep practicing math!" << endl;
}