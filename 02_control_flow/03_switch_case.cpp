#include <iostream>
using namespace std;

int main() {
    int day;
    cout<<"ENter day number (1 to 7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2: 
        cout << "Tuesday" << endl; 
        break;
    case 3: 
        cout << "Wednesday" << endl; 
        break;
    case 4: 
        cout << "Thursday" << endl; 
        break;
    case 5:
        cout << "Friday" << endl; 
        break;
    case 6: 
        cout << "Saturday" << endl; 
        break;
    case 7: 
        cout << "Sunday" << endl; 
        break;
    default:
        cout<<"INvalid input"<<endl;
        break;
    }
    
    return 0;
}

/*
switch is used when you want to select one out of many options based on a value.

break exits the switch block after executing a case.

default runs if none of the cases match.
*/