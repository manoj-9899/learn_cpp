#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for(int i=0; i<5; i++){
        cout<<"Count = "<<count<<endl;
        count++;
    }
    
    return 0;
}

/*
A for loop is used when the number of iterations is known in advance.

It has three parts:

Initialization: int i = 1

Condition: i <= 5

Update: i++
*/