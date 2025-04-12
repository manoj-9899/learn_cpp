// 03_array_sum.cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {4, 8, 12, 16, 20};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
