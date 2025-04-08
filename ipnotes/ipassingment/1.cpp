/*Write a C++ program that takes three integers as input from the user. Use if-else statements
to determine and print the largest of the three numbers*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
 cout << "Enter a integer for num1: "<< endl;
    cin >> num1;
 cout << "enter a integer for num2: "<< endl;
 cin >> num2;
 cout << "enter a integer for num3: "<< endl;
    cin >> num3;
    if (num1 >= num2 && num1 >=num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}