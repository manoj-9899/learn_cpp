#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original Array: ";
    for (int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    cout << endl;

    int i = 0, j = size - 1;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout<<"Reversed Array: ";
    for (int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}

/* 
We'll use the two-pointer technique:
One pointer starts from the beginning (i = 0)
Another starts from the end (j = n - 1)
Swap arr[i] and arr[j], then move both pointers inward
Repeat until i >= j
*/