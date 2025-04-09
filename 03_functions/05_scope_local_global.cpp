#include <iostream>
using namespace std;

int globalVar = 100;

void display(){
    int localVar = 50;
    cout<<"Local var: "<<localVar << ", Global var: "<<globalVar<<endl;
}

int main() {
    
    display();
    cout<<"In main function Global var: "<<globalVar<<endl;
    // we cant access local var in main function if we try to access this will give error
    // cout << localVar;
    /*
    05_scope_local_global.cpp:16:13: error: 'localVar' was not declared in this scope
     cout << localVar;
    */
    return 0;
}