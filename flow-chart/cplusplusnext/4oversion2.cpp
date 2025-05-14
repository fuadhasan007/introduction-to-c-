//Program of Simple Calculator
// using functions, if else , and parameters
#include <iostream>
using namespace std;
void calculator(int num1, int num2, char operation) {
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    } else {
        cout << "Error: Invalid operation" << endl;
    }
}
int main() {
    int num1, num2;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    calculator(num1, num2, operation);

    return 0;
}
