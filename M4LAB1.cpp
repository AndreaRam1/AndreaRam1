/*CSC 134
Andrea Ramirez
Block 
10/22/25
*/
#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB\n";
    int height, width; 
    
    cout << "How tall should the block be?" << endl;
    cin >> height;

    cout << "How wide the block should be?" << endl;
    cin >> width;

    cout << "\nHere is your block: \n" << endl;

    for ( int i = 0; i < height; i++){
        for ( int j = 0; j < width; j++){
            cout << "# ";
        }
        cout << endl; 
    }
    return 0;
}
