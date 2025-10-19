// CSC 134
// M3HW - Number Guessing Game
// Andrea Ramirez
// 10/19/25

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numberGame() {
    // Random numbers
    srand(time(0));

    int number = rand() % 100 + 1; // numbers between 1-100
    int guess;
    int attempts = 0;
    bool correct = false;

    cout << "===================================" << endl;
    cout << "   Welcome to Guess the Number!    " << endl;
    cout << "===================================" << endl;
    cout << "I'm thinking of a number (1-100)." << endl;

    while (!correct) {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess < number) {
            cout << "Too low, try again! 🔄" << endl;
        }
        else if (guess > number) {
            cout << "Too high, try again! 🔄" << endl;
        }
        else {
            cout << "🎉 You got it! The number was " << number << "." << endl;
            cout << "It took you " << attempts << " tries." << endl;
            correct = true;
        }
    }
}

int main() {
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        numberGame();

        cout << "\nWould you like to play again? 😺 (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Thanks for playing! Goodbye!🙂" << endl;
    return 0;
}
