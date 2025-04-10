#include <iostream>
using namespace std;

void modifyValue(int &x) {
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
num is passed by reference to the function.

Inside the function, x refers to the same memory location as num.

So when x is modified, num is also modified.
*/