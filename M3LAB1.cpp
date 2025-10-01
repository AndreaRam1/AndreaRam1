//Rugrats game!! Applygin IF, ELSE and VOID Fuctions
//Give the user 3 options 

#include <iostream>
#include <string>
using namespace std;

//VOID fuctions declaration (3 options Explore, Hide, Brave).
void doExplore();
void doHide();
void doBrave();

int main() {
    string choice; //Context and instructions of the game. 
    cout << "✨Welcome to Chukies's Adventure!!✨ " << endl;
    cout << "🫣 Help Chukie explore a new adventure with his firends 👶👶" << endl;
    cout << "Chuckie hears a weird noise in the kitchen 😮. What should he do?" << endl;
    cout << "Options: Explore | Hide | Brave" << endl;
    cout << "Type your choice" << endl; 
    cin >> choice;

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
        cout << "Chuckie doesn't understand that option and gets even more nervous! 😥" << endl;
        cout
    }
    

    return 0;



}

//  Functions
void doExplore() {
    cout << " Chuckie follows Tommy into the kitchen..." << endl;
    cout << " He steps on a toy, falls down and yells 😵" << endl;
}

void doHide() {
    cout << "Chuckie hides behind the couch and close his eyes..." << endl;
    cout << "👫 Phil and Lil jump out shouting 'We found you!!'. Chuckie screams." << endl;

}

void doBrave() {
    cout << "💪 Chuckie takes a deep breath, and say 'I can do this' 🤓" << endl;
    cout << "He steps forward... sees a scary shadow and runs away screaming...🏃‍♂️💨" << endl;

}