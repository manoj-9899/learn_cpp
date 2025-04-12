#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {101, 20, -34, 53, -101, 00, 45, 999, 100*9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i=0; i<size; i++){
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout<<"Size of array is: "<<size<<endl;
    cout<<"Max element is: "<<max<<endl;
    cout<<"Min element is: "<<min<<endl;
    
    return 0;
}