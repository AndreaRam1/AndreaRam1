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
void show_intro();  
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
    cout << "\nLet's begin your day as Gudetama!\n" << endl;
}
// ---------- Main Menu ----------
void main_menu() {
    int choice;
    do {
        cout << "\n=== Be Gudetama for a Day 🥚===" << endl;
        cout << "You wake up inside the fridge. It's cold. 🥶" << endl;
        cout << "What do you want to do?" << endl;
        cout << "1. Stay in bed (sleep in) 😴" << endl;
        cout << "2. Try to escape the fridge 🚪" << endl;
        cout << "3. Let yourself get eaten 🍽️" << endl;
        cout << "4. [Quit game]" << endl;
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            choice_sleep_in();
        } else if (choice == 2) {
            choice_escape_fridge();
        } else if (choice == 3) {
            choice_get_eaten();
        } else if (choice == 4) {
            cout << "Ok... Gudetama goes back to sleep. Zzz..." << endl;
        } else {
            cout << "That’s not a valid choice, try again." << endl;
        }

    } while (choice != 4);
}

// ---------- Story Functions ----------
void choice_sleep_in() {
    int choice;
    cout << "\nYou roll over on your yolk pillow and sigh..." << endl;
    cout << "\"Too... tired... to move...\" 😩" << endl;
    cout << "Do you:" << endl;
    cout << "1. Keep sleeping 💤" << endl;
    cout << "2. Dream about bacon 🥓" << endl;
    cout << "3. Wake up and try again" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You nap for 3 more hours. Nothing changes. Perfect." << endl;
    } else if (choice == 2) {
        cout << "You dream of your best friend Bacon cheering you on." << endl;
        cout << "\"Go Gudetama!\" Bacon says. You roll your eyes and yawn." << endl;
    } else if (choice == 3) {
        main_menu();
    } else {
        cout << "You’re too lazy to decide. You fall asleep again." << endl;
    }
}

void choice_escape_fridge() {
    int choice;
    cout << "\nYou slowly slide toward the fridge door..." << endl;
    cout << "But oh no! Pochacco is there with a fork! 🐶🍴" << endl;
    cout << "Do you:" << endl;
    cout << "1. Ask for help instead of running 🥺" << endl;
    cout << "2. Slip past him and go outside 🌞" << endl;
    cout << "3. Give up and roll back into the egg carton 😩" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_meet_pochacco();
    } else if (choice == 2) {
        cout << "You escape! The sunlight feels warm... too warm..." << endl;
        cout << "You start to sizzle. Guess you’re breakfast now. 🍳" << endl;
    } else if (choice == 3) {
        cout << "You roll back into the carton. Safe and lazy. 👍" << endl;
    } else {
        cout << "You yawn instead of answering. Classic Gudetama." << endl;
    }
}

void choice_get_eaten() {
    int choice;
    cout << "\nYou sigh deeply. \"I guess this is my destiny...\" 😔" << endl;
    cout << "The human cracks your shell gently and says, 'Sorry, Gudetama.'\n";
    cout << "Do you:" << endl;
    cout << "1. Accept your fate with pride 🥚" << endl;
    cout << "2. Wiggle away onto the counter 😳" << endl;
    cout << "3. Hide under a piece of toast 🍞" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You melt into the pan gracefully. At least you’re warm now." << endl;
    } else if (choice == 2) {
        cout << "You wiggle free and fall onto the counter. Splatt!" << endl;
        cout << "Now you’re safe, but… sticky." << endl;
    } else if (choice == 3) {
        choice_spa_day();
    } else {
        cout << "You do nothing. Because, of course, you’re Gudetama." << endl;
    }
}

void choice_meet_pochacco() {
    int choice;
    cout << "\nPochacco picks you up gently and says, 'You look tired, Gudetama.'\n";
    cout << "Do you:" << endl;
    cout << "1. Ask him for a ride to the park 🐾" << endl;
    cout << "2. Tell him to just leave you alone 😒" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "He carries you in a spoon to the park. You nap on a leaf. 🍃" << endl;
    } else if (choice == 2) {
        cout << "He shrugs and puts you back in the fridge. Peace at last. ❄️" << endl;
    } else {
        cout << "You yawn instead of replying. Typical Gudetama." << endl;
    }
}

void choice_spa_day() {
    cout << "\nYou hide under the toast... but it’s warm and cozy!" << endl;
    cout << "The human mistakes you for breakfast in bed.\n";
    cout << "You get wrapped in butter and warmth — it's like a spa day! 😌" << endl;
    cout << "Congratulations! You survived... in style." << endl;
}