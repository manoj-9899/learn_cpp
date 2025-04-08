#include <iostream>
using namespace std;

// Function Declaration
void greet();

int main() {
    
    greet();  // Function call
    
    return 0;
}

// function definition
void greet(){
    cout<<"Hello WOrld!"<<endl;
}

/*
Concept	                Description
Function Declaration	void greet(); — tells the compiler about the function before it is used.
Function Definition	    void greet() { ... } — contains the actual code the function executes.
Function Call	        greet(); — executes the function when program runs.
Return Type	            void — means this function does not return a value.

Every C++ program has a main() function — execution starts from there.

You can define your own functions to perform specific tasks.

Function declaration (prototype) is required before main() if you define the function after main().


*/