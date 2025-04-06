#include <iostream>
using namespace std;

int main() {
    int count = 1;
    for(int i=0; i<=10; i++){
        if(i==5){
            continue;  // skip 5
        }
        if(i==8){
            break;     // stop loop at 8
        }
        cout << i<<" ";
    }
    
    return 0;
}

// continue: Skips the current iteration and goes to the next.

// break: Exits the loop completely.