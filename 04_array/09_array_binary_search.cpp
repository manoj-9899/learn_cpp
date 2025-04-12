#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout<<"Enter key to find: ";
    cin >> key;

    int low = 0, high = size - 1;
    bool found = false;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            cout<<"key found at index "<<mid<<endl;
            found = true;
            break;
        }
        else if(key < arr[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(!found){
        cout<<"Key not found in array"<<endl;
    }

    return 0;
}

/*
Find the middle element of the array.
If it matches the key, return the index.
If the key is less than the middle element, search in the left half.
If the key is greater than the middle element, search in the right half.
Repeat steps 1–4 on the reduced half until the key is found or the search range becomes empty. 
*/