#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = 2.5;

    // Implicit type conversion
    double result1 = a + b;
    cout<<"Result (Implicit): "<<result1<<endl;

    // Explicit type conversion (C style)
    int result2 = a + (int)b;
    cout<<"Result (Explicit C-style): "<<result2<<endl;

    // Explicit type conversion (Modern style)
    int result3 = a + static_cast<int>(b);
    cout<<"Result (Explicit C-Modern): "<<result3<<endl;
    
    return 0;
}

/*
1. Implicit Type Conversion
Also called automatic type conversion.

When two different types are used in an expression, C++ automatically converts the "smaller" type to the "larger" type to avoid data loss.

2. Explicit Type Conversion (C-style casting)
You manually force a type change using (type) syntax.

Not recommended in modern C++ because it's less safe and harder to read.

3. Explicit Type Conversion (C++ style – static_cast)
This is the modern, safer and more readable way to convert types in C++.

static_cast tells the compiler exactly what kind of conversion is happening and avoids accidental mistakes.
*/