//CSC134
//M3T2
//9/28/25
//Ramirez

#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>

int main() {
    const int SIDES = 3;
    int seed = time (0);
    srand (seed);
    int roll;
    roll = ( (rand() % SIDES)+1 );
    cout << roll << endl; 

    roll = ( rand() % SIDES);
    cout << roll << endl;

    roll = (rand() % SIDES);
    cout << roll << endl;

    return 0;
}