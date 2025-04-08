#include <iostream>
using namespace std;    
int main() {
    int arr[10];
    int sum = 0;
    int maxVal = INT_MIN; /


    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Printing all elements in the order they were entered
    cout << "Array elements in order: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
        sum += arr[i]; // Calculate sum while printing
        if (arr[i] > maxVal) { // Determine maximum value
            maxVal = arr[i];
        }
    }
    cout << endl;

    // Printing the array in reverse order
    cout << "Array elements in reverse order: ";
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Printing the sum of all array elements
    cout << "Sum of all array elements: " << sum << endl;

    // Printing the maximum value among the array elements
    cout << "Maximum value among the array elements: " << maxVal << endl;

    return 0;
}

    