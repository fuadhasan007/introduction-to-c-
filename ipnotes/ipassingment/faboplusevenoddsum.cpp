//fabonachi even odd sum
#include <iostream>
using namespace std;
int main() {
    int n = 10; // Number of terms in the Fibonacci series
    cout << "Enter the number of terms: ";
    cin >> n;

    int fib[n]; // Declare an array to store Fibonacci numbers
    fib[0] = 0; // First term
    fib[1] = 1; // Second term

    cout << "Fibonacci Series: " << fib[0] << ", " << fib[1];

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calculate the next term
        cout << ", " << fib[i];
    }

    cout << endl;

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < n; i++) {
        if (fib[i] % 2 == 0) {
            evenSum += fib[i];
        } else {
            oddSum += fib[i];
        }
    }

    cout << "Sum of even Fibonacci numbers: " << evenSum << endl;
    cout << "Sum of odd Fibonacci numbers: " << oddSum << endl;

    return 0;
}