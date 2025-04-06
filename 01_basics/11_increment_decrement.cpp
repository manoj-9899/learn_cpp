#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Post-increment
    cout << "a (before post-increment): " << a << endl;
    cout << "a++: " << a++ << endl;  // Use then increment
    cout << "a (after post-increment): " << a << endl;

    // Pre-increment
    cout << "++a: " << ++a << endl;  // Increment then use

    // Post-decrement
    cout << "a--: " << a-- << endl;  // Use then decrement
    cout << "a (after post-decrement): " << a << endl;

    // Pre-decrement
    cout << "--a: " << --a << endl;  // Decrement then use

    return 0;
}
/*
Type	            Syntax	    Meaning
Pre-increment	    ++a	        Increment first, then use
Post-increment	    a++	        Use first, then increment
Pre-decrement	    --a	        Decrement first, then use
Post-decrement	    a--	        Use first, then decrement
*/