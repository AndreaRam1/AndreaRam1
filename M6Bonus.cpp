// M6BONUS1 - Text Adventure using arrays, enums, and adjacency list
// AI assistance: ChatGPT helped brainstorm room themes and commands.
// I modified the descriptions and overall structure to fit my idea.

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

// Define constants for rooms
enum Room {
    ATRIUM = 0,
    ARCANE_LIBRARY = 1,
    ALCHEMY_LAB = 2,
    MOON_GARDEN = 3,
    CATACOMBS = 4,
    NUM_ROOMS = 5
};

int main() {

    // AI suggested:
    // string roomNames[NUM_ROOMS] = {"Atrium","Library","Lab","Garden","Basement"};
    // I changed them to a more magical theme to fit my idea.
    string roomNames[NUM_ROOMS] = {
        "Moonlit Atrium",
        "Arcane Library",
        "Alchemy Lab",
        "Moon Garden",
        "Forgotten Catacombs"
    };
    
    // AI suggested very simple descriptions like:
    // "A small room with shelves." or "A dark hallway."
    // I rewrote them to make the atmosphere more mysterious.
    string roomDescriptions[NUM_ROOMS] = {
        "Tall glass windows let in pale moonlight. A faint hum of magic fills the air.",
        "Shelves of dusty tomes reach the ceiling. A ladder creaks softly in the corner.",
        "Tables cluttered with bubbling potions and strange ingredients. The room smells of herbs and smoke.",
        "An open-air garden under the stars, with glowing flowers and a stone bench.",
        "Cold stone walls and distant dripping water. Ancient symbols are carved into the floor."
    };

    // AI suggested using a vector for items:
    // vector<string> items = {"key","crystal"};
    // I kept arrays instead because the assignment requires them.
    const int NUM_ITEMS = 2;
    const int INVENTORY = -1;
    string itemNames[NUM_ITEMS] = { "key", "crystal" };
    string itemDescriptions[NUM_ITEMS] = {
        "A small brass key with a moon-shaped bow.",
        "A faintly glowing crystal that hums when you hold it."
    };
    int itemLocations[NUM_ITEMS] = { CATACOMBS, ARCANE_LIBRARY };

    // AI suggested using a function like setupConnections() but:
    /*
       void setupConnections(int c[NUM_ROOMS][NUM_DIRECTIONS]) {
           c[ATRIUM][NORTH] = ARCANE_LIBRARY;
           ...
       }
    */
    // I kept the initialization inline to keep the file simpler for grading.
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    for (int i = 0; i < NUM_ROOMS; i++)
        for (int j = 0; j < NUM_DIRECTIONS; j++)
            connections[i][j] = -1;

    connections[ATRIUM][NORTH] = ARCANE_LIBRARY;
    connections[ATRIUM][EAST] = ALCHEMY_LAB;
    connections[ATRIUM][WEST] = MOON_GARDEN;

    connections[ARCANE_LIBRARY][SOUTH] = ATRIUM;

    connections[ALCHEMY_LAB][WEST] = ATRIUM;
    connections[ALCHEMY_LAB][SOUTH] = CATACOMBS;

    connections[MOON_GARDEN][EAST] = ATRIUM;

    connections[CATACOMBS][NORTH] = ALCHEMY_LAB;

    int currentRoom = ATRIUM;
    bool gameRunning = true;

    // AI suggested making showRoom() a normal function:
    /*
       void showRoom(int room) {
           cout << roomNames[room];
       }
    */
    // I kept it as a lambda to keep related code grouped together.
    auto showRoom = [&](bool desc = true) {
        cout << "\nYou are in the " << roomNames[currentRoom] << ".\n";
        if (desc) cout << roomDescriptions[currentRoom] << "\n";

        bool foundItem = false;
        for (int i = 0; i < NUM_ITEMS; i++) {
            if (itemLocations[i] == currentRoom) {
                if (!foundItem) cout << "You see: ";
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

    cout << "Welcome to the Moonlit Academy.\n";
    showRoom();

    while (gameRunning) {
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;

        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
                showRoom();
            } else cout << "You can't go that way.\n";
        }
        else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
                showRoom();
            } else cout << "You can't go that way.\n";
        }
        else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
                showRoom();
            } else cout << "You can't go that way.\n";
        }
        else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
                showRoom();
            } else cout << "You can't go that way.\n";
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
            if (!took) cout << "There is nothing here you can take.\n";
        }
        else if (command == "quit" || command == "q") {
            gameRunning = false;
        }
        else {
            cout << "I don't understand that command.\n";
        }
    }

    cout << "\nThanks for playing!\n";
    return 0;
}