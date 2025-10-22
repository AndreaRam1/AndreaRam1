/*CSC 134
Andrea Ramirez
Block FOR LOOP
10/22/25
*/
#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB 📦\n";
    int height, width; 
    
    cout << "Give me the height of your block: " << endl;
    cin >> height;

    cout << "Give me the width of your block:" << endl;
    cin >> width;

    cout << "\n One row 📏" << endl;
    for ( int i = 0; i < height; i++){
        cout << "#" << endl;
    }

    cout << "\n One column 📏" << endl;
    for (int j = 0; j < width; j++){
        cout << "#" << endl;
    }

    cout << "\nHere is your block 🗿: \n" << endl;

    for ( int i = 0; i < height; i++){  //conditions for rows (i)
        for ( int j = 0; j < width; j++){ //conditions dor columns (j)
            cout << "# ";
        }
        cout << endl; 
    }
    cout << "\n💸\n" << endl;

    return 0;

}
