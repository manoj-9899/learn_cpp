#include <iostream>
using namespace std;

inline int square(int n){
    return n * n;
}

int main() {

    cout << "Square of 5 = "<<square(5)<<endl;
    cout << "Square of 7 = "<<square(7)<<endl;
    
    return 0;
}

/*
At compile time, the compiler replaces: square(5) with: 5 * 5
So the function call is avoided — this saves time and improves performance for small and frequently used functions.

⚠️ When Should You Use Inline Functions?
✅ Suitable for:

Very small functions
Functions that are called frequently

❌ Avoid for:

Functions with loops, recursion, or very large code
Functions where you don’t want multiple code copies
*/