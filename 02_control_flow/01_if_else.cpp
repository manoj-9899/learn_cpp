#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }

    return 0;
}

// if (condition): Executes the block only if the condition is true.

// else: Executes when the if condition is false.
