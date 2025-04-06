#include <iostream>
using namespace std;

int main() {
    int integer = 10;
    float decimal = 10.11;
    double Double = 10.11;
    char letter = 'm';
    bool yes = true;

    cout<<"Integer: "<<integer<<endl;
    cout<<"Decimal: "<<decimal<<endl;
    cout<<"Double: "<<Double<<endl;
    cout<<"Letter: "<<letter<<endl;
    cout<<"Boolean: "<<true<<endl;

    cout<<"sizeof of int: "<<sizeof(int)<<"bytes"<<endl;
    cout<<"sizeof of float: "<<sizeof(float)<<"bytes"<<endl;
    cout<<"sizeof of double: "<<sizeof(double)<<"bytes"<<endl;
    cout<<"sizeof of char: "<<sizeof(char)<<"bytes"<<endl;
    cout<<"sizeof of bool: "<<sizeof(bool)<<"bytes"<<endl;
    
    return 0;
}


// int, float, double, char, bool are basic data types.

// sizeof() is used to get the memory size of a data type (in bytes).

