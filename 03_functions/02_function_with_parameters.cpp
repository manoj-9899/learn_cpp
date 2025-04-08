#include <iostream>
using namespace std;

// Function declaration
void printSum(int a, int b);

int main() {
    int x = 10, y = 5;
    printSum(x, y);  // Arguments passed to function
    return 0;
}

// Function definition
void printSum(int a, int b) {
    int sum = a + b;
    cout << "Sum = " << sum << endl;
}

/*
Term	    Meaning
Parameters	Variables defined in the function declaration/definition: int a, int b
Arguments	Actual values passed to the function during the call: x and y
Purpose	    Reuse the function logic with different inputs, making code modular and clean

Why use parameters?
Using parameters allows you to:

Pass different inputs each time the function is called.

Avoid writing duplicate code.

Separate logic from the data it operates on.

*/
