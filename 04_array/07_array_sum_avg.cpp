#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / 5;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
