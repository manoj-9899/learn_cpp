#include <iostream>
using namespace std;

// Function 1: adds two integers
int add(int a, int b) {
    return a + b;
}

// Function 2: adds two floats
float add(float a, float b) {
    return a + b;
}

// Function 3: adds three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "add(5, 3) = " << add(5, 3) << endl;           // calls int version
    cout << "add(2.5f, 3.1f) = " << add(2.5f, 3.1f) << endl; // calls float version
    cout << "add(1, 2, 3) = " << add(1, 2, 3) << endl;     // calls 3-arg version
    return 0;
}

/*
int square(int x);
float square(int x);   // ❌ Error: same parameter type, return type doesn't matter
*/