//fabonanchi sequence using array
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

    return 0;
}