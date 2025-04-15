/*Write a C++ program that takes integers as user input and store it in an array. Then determine which value is Even and Odd. Then print the sum of the even and odd values.*/
#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}