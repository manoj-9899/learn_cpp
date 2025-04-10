#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = x + 10;
    cout << "Inside function, x = " << x << endl;
}

int main() {
    int num = 20;
    cout << "Before function call, num = " << num << endl;
    modifyValue(num);
    cout << "After function call, num = " << num << endl;

    return 0;
}

/*
num is passed to modifyValue() by value, so a copy of num is created in x.

Changes to x inside the function do not affect the original num in main().
*/
