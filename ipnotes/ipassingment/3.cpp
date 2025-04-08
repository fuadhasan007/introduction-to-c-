/*Write a C++ program that takes two integers and an operator (+, -, *, /) from the user. Use
switch statement to perform the operation based on the input operator and display the
result. If the operator is invalid, print "Invalid operator"*/
#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}