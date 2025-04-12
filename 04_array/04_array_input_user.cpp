#include <iostream>
using namespace std;

int main() {

    int num[5];
    
    cout<<"Enter 5 integers: \n";
    for(int i=0; i<5; i++){
        cin >> num[i];
    }

    cout<<"Numbers entered: \n";
    for(int i=0; i<5; i++){
        cout << num[i] << " ";
    }

    return 0;
}