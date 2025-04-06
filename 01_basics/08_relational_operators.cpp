#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    cout << "x <= y: " << (x <= y) << endl;

    return 0;
}

/*
Always use parentheses around comparisons when printing:
cout << (x == y);  // Correct

Avoid confusion with = (assignment) vs == (comparison):
x = 5;     // Assignment
x == 5;    // Comparison
*/
