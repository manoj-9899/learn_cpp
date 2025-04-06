#include <iostream>
using namespace std;

int main() {
    int count = 1;
    do{
        cout<<"Count = "<<count<<endl;
        count++;
    }while(count<=5);
    
    return 0;
}

/*
The do-while loop runs at least once, even if the condition is false.

This is because the condition is checked after executing the loop block.
*/