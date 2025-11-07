#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
"A Day in the Life of Gudetama"
Andrea Ramirez
11/07/25

*/

// ---------- Function Prototypes ----------
void main_menu();
void choice_sleep_in();
void choice_get_eaten();
void choice_escape_fridge();

// New branches (Part 2)
void choice_meet_pochacco();
void choice_spa_day();

// ---------- main ----------
int main() {
    show_intro();   // Show intro before menu
    main_menu();    // Start the game
    cout << "\nThe day ends... Gudetama goes back to sleep. 😴" << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}
// ---------- Intro Function ----------
void show_intro() {
    cout << "======================================" << endl;
    cout << "🥚  M5LAB1 - Be Gudetama for a Day  💤" << endl;
    cout << "======================================" << endl;
    cout << "\nIn this adventure, you are Gudetama, the lazy egg." << endl;
    cout << "Make choices throughout the day — but remember," << endl;
    cout << "doing nothing is always an option." << endl;
    cout << "\nINSTRUCTIONS:" << endl;
    cout << " - Type the number for your choice and press ENTER." << endl;
    cout << " - Choose wisely... or lazily." << endl;
    cout << " - To quit, choose option 4 when available." << endl;
    cout << "\nPress ENTER to start your day as Gudetama...";
    cin.ignore(); // wait for user to press Enter
    cin.get();
    cout << endl;
}