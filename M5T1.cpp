/* CSC 134
M5T1 - Intro to Functions
Andrea Ramierz
11/05/25
 Goal:
Create one void function, and one value-returning function 
NOTE: I modified the original example to make it interactive.
Now, the program asks the user to enter a number, and then
 it uses the function double_a_number() to double that input.*/

 #include <iostream>   
 using namespace std;

 // Function Prototypes (declarations)
void say_hello();              // Void function: prints a greeting
int give_the_answer();         // Returns a fixed number (42)
int double_a_number(int num);  // Doubles the number given as an argument

// Main Function
// ------------------------------------------------------------
int main()
{
    cout << "Hello from main()" << endl;

    // Call the void function
    say_hello();

    // Call the value-returning function
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;

    // Ask the user for a number to double
    int user_num;
    cout << "Enter a number to double: ";
    cin >> user_num;

    // Call the function to double the user's number
    int doubled = double_a_number(user_num);
    cout << "Your number doubled is: " << doubled << endl;

    cout << "Program complete. Goodbye!" << endl;
    return 0; // end program successfully
}

// ------------------------------------------------------------
// Function Definitions
// ------------------------------------------------------------

// Void function: prints a message
void say_hello() {
    cout << "Hi from say_hello()" << endl;
    return;
}

// Returns a value (integer 42)
int give_the_answer() {
    return 42;
}

// Doubles the given number and returns it
int double_a_number(int num) {
    int new_num = num * 2;
    return new_num;
}
