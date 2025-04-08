#include <iostream>
using namespace std;

int square(int number);

int main() {
    int num = 10;
    int result = square(num);
    cout<<"The square of "<< num << " is "<< result << endl;
    
    return 0;
}

int square(int number){
    return number * number;
}

/*
Term	            Description
Return Type	        int — the function returns an integer value
Return Statement	return number * number; — sends the result back to the calling code
Return Value Usage	Stored in a variable (result) or used directly in expressions

Functions can:

Calculate results and give them back to the caller.
Be reused in expressions.
Improve code reusability and readability.
*/