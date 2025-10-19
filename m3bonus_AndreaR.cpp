/* CSC 134
 M3BONUS - Number Guessing Game
Andrea Ramirez
Date: 10/19/25
My own version of the Number Guessing Game based on the AI example. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Variables
    int secretNumber;
    int guess;
    int tries = 0;
    char again = 'y';

    cout << "Welcome to my Number Guessing Game!🎲" << endl;

    // Main game loop
    while (again == 'y' || again == 'Y') {
        srand(time(0)); // Random seed
        secretNumber = rand() % 50 + 1; // Random number between 1 and 50
        guess = 0;
        tries = 0;

        cout << "I'm thinking of a number between 1 and 50.💭" << endl;

        // Ask the player for guesses
        while (guess != secretNumber) {
            cout << "Enter your guess🤔: ";
            cin >> guess;
            tries++;

            if (guess > secretNumber) {
                cout << "Too high. Try again!🐈" << endl;
            } 
            else if (guess < secretNumber) {
                cout << "Too low. Try again!🦥" << endl;
            } 
            else {
                cout << "You got it in " << tries << " tries!" << endl;
            }
        }

        cout << "Would you like to play again? (y/n): ";
        cin >> again;
    }

    cout << "Thanks for playing my version of the game!🙂" << endl;

    return 0;
}
