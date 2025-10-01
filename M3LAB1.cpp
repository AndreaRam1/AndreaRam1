//CSC 134
//M3LAB1
//Andrea Ramirez
// 10/01/25
//Rugrats game!! Applyging IF, ELSE and VOID Fuctions
//Give the user 3 options 

#include <iostream>
#include <string>
using namespace std;

//VOID functions declaration (3 options Explore, Hide, Brave).
void doExplore();
void doHide();
void doBrave();

int main() {
    string choice; //Context and instructions of the game. 
    cout << "✨Welcome to Chuckies's Adventure!!✨ " << endl;
    cout << "🫣 Help Chuckie explore a new adventure with his friends 👶👶" << endl;
    cout << "Chuckie hears a weird noise in the kitchen 😮. What should he do?" << endl;
    cout << "Options: Explore | Hide | Brave" << endl;
    cout << "Type your choice" << endl; 
    cin >> choice;
    // IF/ELSE conditions

    if (choice == "Explore"){
        doExplore();
        cout << "The adventure is over. Thanks for helping Chuckie! 🙏" << endl;
    } 
    else if (choice == "Hide"){
        doHide();
        cout << "The adventure is over. Thanks for helping Chuckie! 🙏" << endl;
    }
    else if (choice == "Brave"){
        doBrave();
        cout << "The adventure is over. Thanks for helping Chuckie! 🙏" << endl;
    }
    else {
        //If user enters something invalid
        cout << "Chuckie doesn't understand that option and gets even more nervous! 😥" << endl;
        cout << "Try again please! 🥹" << endl; 
    }
    

    return 0;



}

//  Functions
void doExplore() {
    cout << "Chuckie follows Tommy into the kitchen..." << endl;
    cout << " He steps on a toy, falls down and yells 😵" << endl;
}

void doHide() {
    cout << "Chuckie hides behind the couch and closes his eyes..." << endl;
    cout << "👫 Phil and Lil jump out shouting 'We found you!!'. Chuckie screams." << endl;

}

void doBrave() {
    cout << "💪 Chuckie takes a deep breath, and says 'I can do this' 🤓" << endl;
    cout << "He steps forward... sees a scary shadow and runs away screaming...🏃‍♂️💨" << endl;

}