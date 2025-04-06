#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Initial value of a: " << a << endl;

    cout << "After a += 5: " << (a += 5) << endl;
    cout << "After a -= 2: " << (a -= 2) << endl;
    cout << "After a *= 3: " << (a *= 3) << endl;
    cout << "After a /= 4: " << (a /= 4) << endl;
    cout << "After a %= 3: " << (a %= 3) << endl;

    return 0;
}
