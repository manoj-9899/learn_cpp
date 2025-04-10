#include <iostream>
using namespace std;

void modifyValue(int *ptr) {
    *ptr = *ptr + 10;
    cout << "Inside function, value = " << *ptr << endl;
}

int main() {
    int num = 20;
    cout << "Before function call, num = " << num << endl;
    modifyValue(&num);
    cout << "After function call, num = " << num << endl;

    return 0;
}
