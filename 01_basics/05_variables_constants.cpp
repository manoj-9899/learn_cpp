#include <iostream>
using namespace std;

int main() {
    int number = 123;
    const float PI = 3.14f;

    cout<<"Number: "<<number<<endl;
    cout<<"PI (const)"<<PI<<endl;

    /*
    number = 124      its correct
    PI = 3.15         it cant be done
    */
    
    return 0;
}