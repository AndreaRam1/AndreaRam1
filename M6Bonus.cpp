// M6BONUS1 - Text Adventure using arrays, enums, and adjacency list
// Theme: Metal Gear Solid 3: Snake Eater 🐍
// CSC 134
//Andrea Ramirez Cabello 
//12/03/2025

#include <iostream>
#include <string>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms (Snake Eater style)
enum Room {
    DENSE_JUNGLE = 0,
    MOUNTAIN_PASS = 1,
    RIVERBANK = 2,
    ABANDONED_WAREHOUSE = 3,
    GROZNYJ_GRAD = 4,
    NUM_ROOMS = 5
};

int main() {

    // AI suggested:
    // string roomNames[NUM_ROOMS] = {"Jungle","Cave","River","Warehouse","Base"};
    // I renamed them to be closer to specific Snake Eater locations.
    string roomNames[NUM_ROOMS] = {
        "Dense Jungle",
        "Mountain Pass",
        "Riverbank",
        "Abandoned Warehouse",
        "Groznyj Grad (Outer Compound)"
    };
    
    // AI suggested very short descriptions like:
    // "A jungle with trees." or "A military base with guards."
    // I expanded them to better match the atmosphere of MGS3: Snake Eater.
    string roomDescriptions[NUM_ROOMS] = {
        "Tall grass, thick trees, and the sound of distant wildlife. Perfect for camouflage 🐍.",
        "A steep rocky path with narrow ledges and a cold wind howling through the mountains.",
        "A quiet riverbank with shallow water, muddy prints, and the echo of frogs nearby.",
        "A dusty storage building with old crates, scattered supplies, and creaking wooden floors.",
        "The outer compound of Groznyj Grad, with searchlights sweeping and guards on patrol 🚨."
    };

    // AI suggested using a vector for items:
    // vector<string> items = {"cigar","radio","tranq gun"};
    // I stayed with basic arrays since the assignment focuses on regular arrays.
    const int NUM_ITEMS = 2;
    const int INVENTORY = -1;
    string itemNames[NUM_ITEMS] = { "cigar", "codec_radio" };
    string itemDescriptions[NUM_ITEMS] = {
        "A cigar that calms your nerves, but might give away your position if enemies are close.",
        "A compact codec radio used to contact support and receive mission updates 📡."
    };
    // Snake starts with items in world: cigar in Jungle, codec in Warehouse
    int itemLocations[NUM_ITEMS] = { DENSE_JUNGLE, ABANDONED_WAREHOUSE };

    // AI suggested moving this into a separate setupConnections function:
    /*
       void setupConnections(int c[NUM_ROOMS][NUM_DIRECTIONS]) {
           c[DENSE_JUNGLE][NORTH] = MOUNTAIN_PASS;
           ...
       }
    */
    // I kept everything inline to make it easier to read and grade in one file.
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    for (int i = 0; i < NUM_ROOMS; i++)
        for (int j = 0; j < NUM_DIRECTIONS; j++)
            connections[i][j] = -1;

    // Map layout (very simple mission path):
    // Dense Jungle -> Mountain Pass -> Riverbank -> Warehouse -> Groznyj Grad
    connections[DENSE_JUNGLE][NORTH] = MOUNTAIN_PASS;

    connections[MOUNTAIN_PASS][SOUTH] = DENSE_JUNGLE;
    connections[MOUNTAIN_PASS][EAST]  = RIVERBANK;

    connections[RIVERBANK][WEST]  = MOUNTAIN_PASS;
    connections[RIVERBANK][NORTH] = ABANDONED_WAREHOUSE;

    connections[ABANDONED_WAREHOUSE][SOUTH] = RIVERBANK;
    connections[ABANDONED_WAREHOUSE][EAST]  = GROZNYJ_GRAD;

    connections[GROZNYJ_GRAD][WEST] = ABANDONED_WAREHOUSE;

    int currentRoom = DENSE_JUNGLE;
    bool gameRunning = true;

    // AI suggested using a normal function:
    /*
       void showRoom(int room) {
           cout << roomNames[room] << endl;
       }
    */
    // I used a lambda so I can easily capture currentRoom and arrays without extra parameters.
    auto showRoom = [&](bool desc = true) {
        cout << "\nYou are in: " << roomNames[currentRoom] << "\n";
        if (desc) cout << roomDescriptions[currentRoom] << "\n";

        bool foundItem = false;
        for (int i = 0; i < NUM_ITEMS; i++) {
            if (itemLocations[i] == currentRoom) {
                if (!foundItem) cout << "You notice an item here: ";
                cout << itemNames[i] << " ";
                foundItem = true;
            }
        }
        if (foundItem) cout << "\n";

        cout << "Exits: ";
        bool hasExits = false;
        for (int d = 0; d < NUM_DIRECTIONS; d++) {
            if (connections[currentRoom][d] != -1) {
                cout << DIRECTION_NAMES[d] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) cout << "none";
        cout << "\n";
    };

    cout << "METAL GEAR SOLID 3: SNAKE EATER (Text Adventure) 🐍\n";
    cout << "Mission: Infiltrate through the jungle and reach Groznyj Grad.\n";
    cout << "Type: north/east/south/west (or n/e/s/w), take, quit.\n";
    showRoom();

    while (gameRunning) {
        string command;
        cout << "\nWhat would you like to do, Snake? ";
        cin >> command;

        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
                showRoom();
            } else cout << "Major Zero: \"You can't go that way, Snake.\" ❌\n";
        }
        else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
                showRoom();
            } else cout << "You check your map, but there's no path east.\n";
        }
        else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
                showRoom();
            } else cout << "Dense foliage blocks your way to the south.\n";
        }
        else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
                showRoom();
            } else cout << "You can't move any further west from here.\n";
        }
        else if (command == "take") {
            bool took = false;
            for (int i = 0; i < NUM_ITEMS; i++) {
                if (itemLocations[i] == currentRoom) {
                    cout << "You pick up the " << itemNames[i] << ". "
                         << itemDescriptions[i] << "\n";
                    itemLocations[i] = INVENTORY;
                    took = true;
                    break;
                }
            }
            if (!took) cout << "There's nothing here you can take, Snake.\n";
        }
        else if (command == "quit" || command == "q") {
            cout << "Mission aborted. Returning to the main menu... 🎧\n";
            gameRunning = false;
        }
        else {
            cout << "The codec stays silent. That command isn't recognized.\n";
        }

        // Optional: simple win condition if player reaches Groznyj Grad
        if (currentRoom == GROZNYJ_GRAD) {
            cout << "\nYou've reached Groznyj Grad. The real mission starts now... 🎯\n";
            cout << "For this demo, we'll end the simulation here.\n";
            gameRunning = false;
        }
    }

    cout << "\nThanks for playing Snake Eater (text edition)! 🐍\n";
    return 0;
}
