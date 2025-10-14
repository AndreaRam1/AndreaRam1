/*CSC 134
M3HW1 - Gold
Andrea Ramirez
10/14/25
*/

#include <iostream>
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