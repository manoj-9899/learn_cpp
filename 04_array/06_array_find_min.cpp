#include <iostream>
using namespace std;

int main() {

    int num[5] = {12, 34, 5, -59, 1};
    int min = INT_MAX;

    for (int i=1; i < 5; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    cout<<"Min number: "<< min << endl;

    return 0;
}