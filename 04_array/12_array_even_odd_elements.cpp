#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 21, 32, 43, 54, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"All elements: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Even Elements: ";
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    cout<<"Odd Elements: ";
    for(int i=0; i<size; i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}