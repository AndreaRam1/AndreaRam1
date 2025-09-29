//CSC134
//M3T2
//9/28/25
//Ramirez

#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>

int main() {
    cout << "Lets roll some dice!" << endl;
    int seed = time (0);
    srand (seed);
    //int roll;
    const int MAX= 3;
    int roll1, roll2, total;
    roll1 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;
    


    //cout << roll << endl; 

    //roll = ( rand() % SIDES);
    //cout << roll << endl;

    //roll = (rand() % SIDES);
    //cout << roll << endl;

    return 0;
}