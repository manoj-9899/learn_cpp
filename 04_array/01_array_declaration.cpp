#include <iostream>
using namespace std;

int main() {
    // Declaration without initialization
    int a[5];

    // Declaration with full initialization
    int b[5] = {10, 20, 30, 40, 50};

    // Partial initialization
    int c[5] = {1, 2}; // rest will be 0

    // Size deduction from initialization
    int d[] = {5, 6, 7, 8};

    cout << "Array a: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout<<endl;

    cout << "Array b: ";
    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    cout << "\nArray c: ";
    for (int i = 0; i < 5; i++) {
        cout << c[i] << " ";
    }

    cout << "\nArray d: ";
    for (int i = 0; i < 4; i++) {
        cout << d[i] << " ";
    }

    return 0;
}
