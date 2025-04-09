#include <iostream>
using namespace std;

void greet(string name = "user")
{
    cout << "Hello " << name << endl;
}

int main()
{

    greet();        // default value is used
    greet("Manoj"); // passed value is used

    return 0;
}

/*
Default arguments must be defined from right to left — that means you cannot provide a default to a parameter 
unless all parameters to its right also have defaults.
void example(int x, int y = 10, int z = 20);
void example(int x = 5, int y, int z = 20); // ❌ Error

*/