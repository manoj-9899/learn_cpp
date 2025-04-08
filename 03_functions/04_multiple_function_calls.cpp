#include <iostream>
using namespace std;

// Function declarations
void greet();
int add(int a, int b);
int multiply(int a, int b);

int main() {
    greet();  // First function call

    int x = 4, y = 5;

    int sum = add(x, y);           // Second function call
    int product = multiply(x, y);  // Third function call

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}

// Function definitions
void greet() {
    cout << "Hello world!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

/*
Concept                 Explanation
Multiple Functions	    We defined and used 3 different functions: greet(), add(), and multiply()
Separation of Logic	    Each function handles a specific task — greeting, adding, multiplying
Code Modularity	        Your code becomes more structured, reusable, and easier to debug

You can call multiple functions inside main() or from other functions.

It helps in organizing larger programs in smaller, manageable parts.
*/
