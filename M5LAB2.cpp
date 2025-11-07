/* CSC 134
M5LAB2 AreaRectangle
Andrea Ramirez Cabello 
11/07/2025 */

#include <iostream>
using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    // This program calculates the area of a rectangle.
    double length, width, area;

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

//***************************************************
// Definition of getLength                          *
// Asks the user to enter the rectangle's length.   *
//***************************************************
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

//***************************************************
// Definition of getWidth                           *
// Asks the user to enter the rectangle's width.    *
//***************************************************
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

//***************************************************
// Definition of getArea                            *
// Calculates and returns the rectangle's area.     *
//***************************************************
double getArea(double length, double width) {
    return length * width;
}

//***************************************************
// Definition of displayData                        *
// Displays the rectangle's length, width, and area.*
//***************************************************
void displayData(double length, double width, double area) {
    cout << "\nRectangle Data" << endl;
    cout << "----------------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
    cout << "----------------------------" << endl;
}