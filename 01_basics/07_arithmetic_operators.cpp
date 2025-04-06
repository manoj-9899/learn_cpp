#include <iostream>
using namespace std;

int main() {
    int a=10, b=5;

    cout<<"Addition: "<<a+b<<endl;
    cout<<"Substraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    cout<<"Division: "<<a/b<<endl;
    cout<<"Modulus: "<<a%b<<endl;
    
    return 0;
}

/*

Integer Division: When both operands are integers, the division drops the decimal (i.e., it gives only the integer part).

int x = 10 / 3; // x = 3, not 3.333

Modulus: The % operator gives the remainder of integer division.

15 % 4 = 3  // Because 15 = 4×3 + 3

Note: % operator only works with integers in C++. Not with float or double.
*/