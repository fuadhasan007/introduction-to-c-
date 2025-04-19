/*Write a C++ program that takes integers as user input and store it in an array. Then determine which value is Even and Odd. Then print the sum of the even and odd values.*/
#include <iostream>
using namespace std;
int main() {
    int numbers[7];
    int evenSum = 0, oddSum = 0;

    //taking user inputs 
    for (int i = 0; i < 7; i++) {
    cout << "Enter integers  "  <<i+1<< " ="; 
        
        cin >> numbers[i];
    
    }

    for (int i = 0; i < 7; i++) { 
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