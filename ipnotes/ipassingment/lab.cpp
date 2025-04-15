/*1. Write a C++ program that takes three integers as input from the user and store it in array.
Use if-else statements to determine and print the highest of the three numbers.*/

#include <iostream>
using namespace std;
int main() {
    int numbers[3];
    
    cout << "Enter three integers: ";
    
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    int highest = numbers[0];
    for (int i = 1; i < 3; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
    }

    cout << "The highest number is: " << highest << endl;

    return 0;
}