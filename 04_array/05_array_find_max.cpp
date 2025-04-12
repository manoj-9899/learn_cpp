#include <iostream>
using namespace std;

int main() {

    int num[5] = {12, 34, 5, 59, 1};
    int max = INT_MIN;

    for (int i=1; i < 5; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    cout<<"Max number: "<< max << endl;

    return 0;
}