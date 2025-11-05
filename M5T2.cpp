/* CSC 134
M5T2 - More Practice with Functions
Andrea Ramierz
11/05/25 */

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);                  // Value-returning function
void printResult(int number, int result); // Void function

int main() {
    int count = 1;
    int result;

    // Loop from 1 to 10
    while (count <= 10) {
        // Call square() instead of multiplying here
        result = square(count);
         // Call the void function to print the result
        printResult(count, result);
        count++;
    }
    cout << "End of program" << endl;

    return 0;
}
/*------------------------------------------------------------
    Function Definitions
 ------------------------------------------------------------
 Function that returns the square of a number */
int square(int num) {
    return num * num;
}

// Function that prints one line of output
void printResult(int number, int result) {
    cout << number << " squared = " << result << endl;
}
