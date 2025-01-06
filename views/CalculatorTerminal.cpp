#include "models/Calculator.h"
#include <iostream>

int main() {
    Calculator calcInstance;
    double currentNumber = 0, num1, num2;
    int choice = 0;
    cout << "Calculator Program\n"
            "-------------------\n"
            "Current Number: " << currentNumber << "\n"
            "1. Add\n"
            "2. Subtract\n"
            "3. Multiply\n"
            "4. Divide\n";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You chose Add.\n"
                    "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "The result of adding " << num1 << " and " << num2 << " is " << calcInstance.add(num1, num2) << endl;
            break;
        case 2:
            cout << "You chose Subtract.\n"
                    "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "The result of subtracting " << num1 << " and " << num2 << " is " << calcInstance.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "You chose Multiply.\n"
                    "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "The result of multiplying " << num1 << " and " << num2 << " is " << calcInstance.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "You chose Divide.\n"
                    "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "The result of dividing " << num1 << " and " << num2 << " is " << calcInstance.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input. Try again." << endl;
            break;
    }

    return 0;
}