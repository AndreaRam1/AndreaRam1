// CSC 134
//M3T1
//Ramirez
//29/08/25
// Area of two rectangles. 

#include <iostream>
using namespace std;

int main() {
    // declare variables
    double width_1, length_1, width_2, length_2;
    double area_1, area_2;

    //Instructions

    cout << " Please enter the width and length for the firts rectangle 📏" << endl;
    cout << " separeted by a space." << endl;
    cin >> width_1 >> length_1;

    cout << " Please enter the width and length for the second rectangle 📏" << endl;
    cout << " separeted by a space." << endl;
    cin >> width_2 >> length_2;
 // Condition to exclude 0 and negatives 
    if (width_1 > 0 && length_1 > 0 && width_2 > 0 && length_2 > 0) {
       // Answer
        area_1 = width_1 * length_1;
        area_2 = width_2 * length_2; 
        cout <<" Rectangle 1 has area of " << area_1 << endl;
        cout << "Rectangle 2 has area of " << area_2 << endl;
       
    }
    else {
        cout << "Dimensions must be greater than 0 🧮" << endl;
        cout << "Please enter dimensions again" << endl; 
        
    
    }
    if (area_1 > area_2) {
        cout << "Rectangle 1 is bigger" << endl;

    }
    else if (area_1 < area_2) {
        cout << "Rectangle 2 is bigger" << endl;

    }
    else if (area_1 == area_2) {
        cout << "They are the same size" << endl; 
    }
    return 0; 
}