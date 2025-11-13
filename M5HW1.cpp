// CSC 134
//M5HW1 === GOLD
//Andrea Ramirez Cabello 
//11/13/25


#include <iostream>
#include <string>
#include <iomanip>   // Only used for setprecision (allowed in basic intro)
using namespace std;

/*
 * Question 1:
 * Ask three month names and three rainfall values.
 * Then calculate and show the average.
 */
void question1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "\n--- Question 1: Average Rainfall ---\n";

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", "
         << m2 << ", and " << m3
         << " is " << avg << " inches.\n";
}

/*
 * Question 2:
 * Ask width, length, height.
 * Volume = width * length * height
 * Must be greater than zero.
 */
void question2() {
    double width, length, height;

    cout << "\n--- Question 2: Block Volume ---\n";

    cout << "Enter width: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be > 0. Enter again: ";
        cin >> width;
    }

    cout << "Enter length: ";
    cin >> length;
    while (length <= 0) {
        cout << "Length must be > 0. Enter again: ";
        cin >> length;
    }

    cout << "Enter height: ";
    cin >> height;
    while (height <= 0) {
        cout << "Height must be > 0. Enter again: ";
        cin >> height;
    }

    double v = width * length * height;

    cout << "The volume of the block is " << v << ".\n";
}

/*
 * Question 3:
 * Convert a number 1–10 to Roman numerals.
 */
void question3() {
    int num;

    cout << "\n--- Question 3: Roman Numerals ---\n";
    cout << "Enter a number (1-10): ";
    cin >> num;

    while (num < 1 || num > 10) {
        cout << "Invalid. Enter a number between 1 and 10: ";
        cin >> num;
    }

    string roman;

    switch (num) {
        case 1: roman = "I"; break;
        case 2: roman = "II"; break;
        case 3: roman = "III"; break;
        case 4: roman = "IV"; break;
        case 5: roman = "V"; break;
        case 6: roman = "VI"; break;
        case 7: roman = "VII"; break;
        case 8: roman = "VIII"; break;
        case 9: roman = "IX"; break;
        case 10: roman = "X"; break;
    }

    cout << "Roman numeral: " << roman << endl;
}

/*
 * Question 4:
 * Geometry calculator menu.
 */
void question4() {
    int choice;
    const double PI = 3.14159;

    cout << "\n--- Question 4: Geometry Calculator ---\n";
    cout << "1. Area of a Circle\n";
    cout << "2. Area of a Rectangle\n";
    cout << "3. Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4.\n";
        return;
    }

    if (choice == 1) {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        if (radius < 0) {
            cout << "The radius cannot be less than zero.\n";
            return;
        }
        cout << "Area = " << PI * radius * radius << endl;
    }
    else if (choice == 2) {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        if (l < 0 || w < 0) {
            cout << "Length and width cannot be negative.\n";
            return;
        }
        cout << "Area = " << l * w << endl;
    }
    else if (choice == 3) {
        double b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        if (b <= 0 || h <= 0) {
            cout << "Base and height must be positive.\n";
            return;
        }
        cout << "Area = " << b * h * 0.5 << endl;
    }
    else {
        cout << "Returning to main menu...\n";
    }
}

/*
 * Question 5:
 * Distance traveled table.
 */
void question5() {
    double speed;
    int hours;

    cout << "\n--- Question 5: Distance Traveled ---\n";

    cout << "Enter speed (mph): ";
    cin >> speed;
    while (speed < 0) {
        cout << "Speed cannot be negative. Enter again: ";
        cin >> speed;
    }

    cout << "Enter hours traveled: ";
    cin >> hours;
    while (hours < 1) {
        cout << "Hours must be >= 1. Enter again: ";
        cin >> hours;
    }

    cout << "Hour     Distance\n";
    cout << "-------------------\n";

    for (int i = 1; i <= hours; i++) {
        cout << i << "          " << (speed * i) << endl;
    }
}

/*
 * Question 6:
 * Main menu that calls all the other questions.
 */
int main() {
    int choice;

    do {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Question 1\n";
        cout << "2. Question 2\n";
        cout << "3. Question 3\n";
        cout << "4. Question 4\n";
        cout << "5. Question 5\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) question1();
        else if (choice == 2) question2();
        else if (choice == 3) question3();
        else if (choice == 4) question4();
        else if (choice == 5) question5();
        else if (choice == 6) cout << "Goodbye!\n";
        else cout << "Valid choices are 1 through 6.\n";

    } while (choice != 6);

    return 0;
}
