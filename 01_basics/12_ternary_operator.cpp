#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int max = a>b ? a:b;

    cout<<"Max value is: "<<max<<endl;
    
    return 0;
}

/*
It is a compact form of if-else, written as:
(condition) ? value_if_true : value_if_false;
If the condition is true, it returns value_if_true.
If the condition is false, it returns value_if_false.
*/