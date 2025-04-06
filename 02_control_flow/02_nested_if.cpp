#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else if (marks >= 75) {
            cout << "Grade: B" << endl;
        } else if (marks >= 50) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    } else {
        cout << "Invalid marks entered!" << endl;
    }

    return 0;
}

// if inside another if is called nested if.

// This structure is useful when decisions depend on multiple conditions.
