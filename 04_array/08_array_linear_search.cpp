#include <iostream>
using namespace std;

int main() {

    int arr[6] = {12, 45, 23, 67, 34, 89};
    int key, found = 0;
    cout<<"ENter element to find: ";
    cin >> key ;
    for (int i=0; i<6; i++){
        if(arr[i]==key){
            cout<<"key found at index "<<i<<endl;
            found = 1;
            break;
        }
    }
    if(!found){
        cout<<"Key not found"<<endl;
    }
    return 0;
}

/*
Linear Search is a basic searching technique where you:
Start from the first element of the array.
Compare each element one by one with the value you are searching for (called the key).
If a match is found, return its position (or index).
If the end of the array is reached and the element is not found, return "not found".
It’s called “linear” because the search moves in a straight line, from start to end.
*/