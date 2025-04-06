#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int a, b;
        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Difference = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Product = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Quotient = " << (float)a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}

// A menu-driven program keeps showing options until the user chooses to exit.

// do-while ensures the menu is shown at least once.

// switch handles the selected operation.