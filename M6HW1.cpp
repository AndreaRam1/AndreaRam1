#include <iostream>
using namespace std;

/*
CSC 134
M6HW1 - Project Prototype
"A Day in the Life of Gudetama"
Andrea Ramirez
*/

// ---------- Global Game State ----------
bool has_fridge_key = false;   // item: Pochacco magnet key
bool game_over = false;        // set to true when an ending is reached

// ---------- Function Prototypes ----------
void show_intro();
void show_status();
void main_menu();

// Story branches
void choice_sleep_in();
void choice_search_fridge();      // NEW: find items / dialog about goal
void choice_escape_fridge();      // uses lock + key
void choice_get_eaten();

// New “rooms”
void room_kitchen_counter();      // NEW: room after escaping
void choice_meet_pochacco();
void choice_spa_day();

// Endings
void ending_good_window();
void ending_bad_breakfast();

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
    cout << "🥚  M6HW1 - Be Gudetama for a Day  💤" << endl;
    cout << "======================================" << endl;
    cout << "\nIn this adventure, you are Gudetama, the lazy egg." << endl;
    cout << "You start in the COLD FRIDGE, but you’d really rather be" << endl;
    cout << "on the warm (but not TOO warm) windowsill, safe and cozy." << endl;
    cout << "\n💡 GOAL OF THE GAME:" << endl;
    cout << " - Escape the fridge without getting cooked or eaten!" << endl;
    cout << " - Find a way to UNLOCK the fridge door using items you find." << endl;
    cout << "\nINSTRUCTIONS:" << endl;
    cout << " - Type the number for your choice and press ENTER." << endl;
    cout << " - Some choices move you to different 'rooms' in the house." << endl;
    cout << " - Some choices give you items that help you escape." << endl;
    cout << " - Reach a safe ending to win. 🍳❌ vs 😌✅" << endl;
    cout << "\nLet’s begin your day as Gudetama!\n" << endl;
}

// ---------- Utility: Show simple status ----------
void show_status() {
    cout << "\n--- Status ---" << endl;
    cout << "Location: Fridge (Egg Carton)" << endl;
    cout << "Item: ";
    if (has_fridge_key) {
        cout << "Pochacco Magnet Key 🧲 (can unlock the fridge door!)" << endl;
    } else {
        cout << "None (maybe you should look around...)" << endl;
    }
    cout << "--------------" << endl;
}

// ---------- Main Menu / Starting Room (Fridge) ----------
void main_menu() {
    int choice;

    do {
        show_status();
        cout << "\n=== Be Gudetama for a Day 🥚===" << endl;
        cout << "You wake up inside the fridge. It’s cold. 🥶" << endl;
        cout << "You see a foggy fridge door, cartons, and leftovers everywhere." << endl;
        cout << "What do you want to do?" << endl;
        cout << "1. Stay in bed (sleep in) 😴" << endl;
        cout << "2. Search around the fridge for clues or items 🔍" << endl;
        cout << "3. Try to escape the fridge (go to the door) 🚪" << endl;
        cout << "4. Let yourself get eaten (dramatic choice) 🍽️" << endl;
        cout << "5. [Quit game]" << endl;
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            choice_sleep_in();
        } else if (choice == 2) {
            choice_search_fridge();
        } else if (choice == 3) {
            choice_escape_fridge();
        } else if (choice == 4) {
            choice_get_eaten();
        } else if (choice == 5) {
            cout << "Ok... Gudetama goes back to sleep. Zzz..." << endl;
        } else {
            cout << "That’s not a valid choice, try again." << endl;
        }

    } while (!game_over && choice != 5);  // stop when an ending happens or user quits
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
        cout << "You grudgingly open one eye and sit up in the carton..." << endl;
    } else {
        cout << "You’re too lazy to decide. You fall asleep again." << endl;
    }
}

// ---------- Silver feature: dialog + item pickup ----------
void choice_search_fridge() {
    int choice;
    cout << "\nYou slide around the fridge, shivering slightly." << endl;
    cout << "You see a sticky note on the inside of the fridge door." << endl;
    cout << "The note says: \"IF YOU WANT OUT, FIND THE POCHACCO MAGNET KEY.\"" << endl;
    cout << "Under it, someone drew a sleepy Gudetama doodle. 📝🥚" << endl;

    cout << "\nYou also see a little Pochacco-shaped magnet stuck behind a milk carton." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Take the Pochacco magnet (might be the key) 🧲" << endl;
    cout << "2. Ignore it and just stare at leftovers..." << endl;
    cout << "3. Go back to the egg carton" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        if (!has_fridge_key) {
            has_fridge_key = true;
            cout << "\nYou grab the Pochacco magnet." << endl;
            cout << "It feels strangely powerful. This must be the FRIDGE KEY!" << endl;
            cout << "(You can probably unlock the door now.)" << endl;
        } else {
            cout << "\nYou already have the magnet key. You pat it lazily." << endl;
        }
    } else if (choice == 2) {
        cout << "\nYou stare at a week-old casserole and lose a bit of hope." << endl;
        cout << "Smells weird. You decide to go back to thinking about escape." << endl;
    } else if (choice == 3) {
        cout << "\nYou wobble back into the egg carton. Same old, same old." << endl;
    } else {
        cout << "\nYou do nothing. Because, of course, you’re Gudetama." << endl;
    }
}

// ---------- Gold: Lock & Key + new room ----------
void choice_escape_fridge() {
    cout << "\nYou slowly slide toward the fridge door..." << endl;

    // Lock and key check
    if (!has_fridge_key) {
        cout << "You push on the door, but there’s a child-proof latch. 🔒" << endl;
        cout << "A tiny doodle of Pochacco next to it seems to be smirking at you." << endl;
        cout << "\"Maybe that magnet would've helped...\" you think." << endl;
        cout << "You slide back to the carton, still trapped." << endl;
        return;
    }

    cout << "You tap the Pochacco magnet key against the latch. *CLICK!* 🔓" << endl;
    cout << "The fridge door opens, and cool air rushes out." << endl;
    cout << "You slide out onto the KITCHEN COUNTER." << endl;

    // Move to the next "room"
    room_kitchen_counter();
}

void room_kitchen_counter() {
    int choice;
    cout << "\n=== New Room: Kitchen Counter ===" << endl;
    cout << "You are now on the kitchen counter. It’s warmer here. 🌡️" << endl;
    cout << "You see a sunny windowsill nearby and a potted plant casting shade." << endl;
    cout << "Next to you is a tiny sign that reads:" << endl;
    cout << "\"SAFE ENDING TIP: Shade = cozy. Direct sun = scrambled.\" 😬" << endl;

    cout << "\nWhat do you do?" << endl;
    cout << "1. Slide into the warm SHADE under the plant leaves 🌿" << endl;
    cout << "2. Slide directly into the bright sun on the windowsill ☀️" << endl;
    cout << "3. Call out for Pochacco to help you 🐶" << endl;
    cout << "4. Panic and try to go back into the fridge" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        ending_good_window();
    } else if (choice == 2) {
        cout << "\nYou slide right into the bright sunlight." << endl;
        cout << "At first it feels amazing... then you start to sizzle. 🍳" << endl;
        ending_bad_breakfast();
    } else if (choice == 3) {
        choice_meet_pochacco();
    } else if (choice == 4) {
        cout << "\nYou try to slide back, but the fridge door swung shut behind you." << endl;
        cout << "Guess you’re stuck on the counter for now." << endl;
        // You stay in this room; you can let them choose again
        room_kitchen_counter();
    } else {
        cout << "\nYou freeze (emotionally, not physically this time) and do nothing." << endl;
        cout << "Eventually, you wobble back to the center of the counter." << endl;
        room_kitchen_counter();
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
        ending_bad_breakfast();
    } else if (choice == 2) {
        cout << "You wiggle free and fall onto the counter. Splatt!" << endl;
        cout << "Now you’re safe, but… sticky. At least you’re not cooked (yet)." << endl;
        // Move to kitchen counter room as a different path
        room_kitchen_counter();
    } else if (choice == 3) {
        choice_spa_day();
    } else {
        cout << "You do nothing. Because, of course, you’re Gudetama." << endl;
    }
}

void choice_meet_pochacco() {
    int choice;
    cout << "\nPochacco pops his head over the edge of the counter." << endl;
    cout << "He picks you up gently and says, 'You look tired, Gudetama.'\n";
    cout << "Do you:" << endl;
    cout << "1. Ask him for a ride to the shady part of the windowsill 🐾" << endl;
    cout << "2. Tell him to just leave you alone 😒" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "He carries you in a spoon to the perfect shady spot by the window." << endl;
        ending_good_window();
    } else if (choice == 2) {
        cout << "He shrugs and sets you back down on the counter." << endl;
        cout << "You instantly regret having to make any decisions at all." << endl;
        room_kitchen_counter();
    } else {
        cout << "You yawn instead of replying. Typical Gudetama." << endl;
        room_kitchen_counter();
    }
}

void choice_spa_day() {
    cout << "\nYou hide under the toast... but it’s warm and cozy!" << endl;
    cout << "The human mistakes you for breakfast in bed.\n";
    cout << "You get wrapped in butter and warmth — it's like a spa day! 😌" << endl;
    cout << "You are technically still breakfast, but at least you're pampered." << endl;
    game_over = true;   // This is a kind of weird neutral/good ending
}

// ---------- Endings ----------
void ending_good_window() {
    cout << "\n🌿 GOOD ENDING: SHADED WINDOWSILL NAP 🌿" << endl;
    cout << "You settle into the cool shade by the window." << endl;
    cout << "It’s warm, but not hot enough to cook you." << endl;
    cout << "You watch the world outside and slowly drift off to sleep." << endl;
    cout << "You escaped the fridge AND avoided being breakfast. Nice job!" << endl;
    game_over = true;
}

void ending_bad_breakfast() {
    cout << "\n🍳 BAD ENDING: DELICIOUS BREAKFAST 🍳" << endl;
    cout << "You sizzle gently. The human adds salt and pepper." << endl;
    cout << "At least you brought someone joy... as a meal." << endl;
    cout << "Next time, maybe find some shade or a magnet key first." << endl;
    game_over = true;
}
