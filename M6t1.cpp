/*
Part 1:
- Use loop (no arrays)
- Ask for cars (Pokemon) per day Mon–Fri
- Track total + average

Part 2:
- Use loop and array to store values
- Print weekly data
- Print ASCII graph
- Demonstrate both while and for loop versions
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of Pokemon per day, two different ways
    method1();
    cout << "\n----------------------------------\n";
    method2();

    return 0;
}

// ------------------------------------------------------------
// Part 1 – While loop, NO arrays
// ------------------------------------------------------------
void method1() {
    cout << "PART 1 — Using while loop, no arrays" << endl;
    cout << "Enter each Pokemon found per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;

    const int SIZE = 5;
    int count = 0;
    int poke_today = 0;
    int poke_total = 0;
    double poke_avg = 0.0;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> poke_today;
        poke_total += poke_today;
        count++;
    }

    poke_avg = (double) poke_total / SIZE;

    cout << "Total = " << poke_total << endl;
    cout << "Average = " << poke_avg << endl;
}

// ------------------------------------------------------------
// Part 2 – Arrays + for loops + ASCII graph
// ------------------------------------------------------------
void method2() {
    cout << "PART 2 — Using arrays and for loops" << endl;

    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"};
    int pokemon[SIZE];
    int poke_total = 0;
    double poke_avg = 0.0;

    // Input values using for loop
    for (int i = 0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> pokemon[i];
    }

    // Print table
    cout << "\nDay\tPokemon" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << pokemon[i] << endl;
        poke_total += pokemon[i];
    }

    // Calculate average
    poke_avg = (double) poke_total / SIZE;

    cout << "\nTotal = " << poke_total << endl;
    cout << "Average = " << poke_avg << endl;

    // ------------------------------------------------------------
    // ASCII bar chart (for loop)
    // ------------------------------------------------------------
    cout << "\nASCII BAR CHART (for loop version)\n";
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << " | ";
        for (int j = 0; j < pokemon[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ------------------------------------------------------------
    // ASCII bar chart (while loop)
    // ------------------------------------------------------------
    cout << "\nASCII BAR CHART (while loop version)\n";
    int i = 0;
    while (i < SIZE) {
        cout << days[i] << " | ";
        int stars = 0;
        while (stars < pokemon[i]) {
            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
}