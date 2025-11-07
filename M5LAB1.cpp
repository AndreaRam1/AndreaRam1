#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
"A Day in the Life of Gudetama"
[Your Name]
[Date]

In this adventure, you are Gudetama, the lazy egg.
Make choices throughout the day — but remember,
doing nothing is always an option.
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
    cout << "🥚 M5LAB1 - Be Gudetama for a Day 💤" << endl;
    main_menu();
    cout << "The day ends... Gudetama goes back to sleep. 😴" << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}