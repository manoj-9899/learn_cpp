#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {5, 10, 15, 20, 25};

    cout << "Array elements are: ";

    // Traversing using for loop
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
