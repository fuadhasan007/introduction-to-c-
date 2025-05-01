#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = numbers; // Pointer points to first element of array
    
    cout << "Array elements accessed using pointer arithmetic:\n";
    
    // Display array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
        // (ptr + i) moves pointer i positions forward
        // *(ptr + i) dereferences to get the value
    }
    
    cout << "\nPointer operations demonstration:\n";
    
    // Basic pointer arithmetic operations
    cout << "Initial pointer address: " << ptr << endl;
    cout << "Initial pointer value: " << *ptr << endl;
    
    ptr++; // Move pointer to next element
    cout << "\nAfter ptr++:" << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer value: " << *ptr << endl;
    
    ptr += 2; // Move pointer forward by 2 elements
    cout << "\nAfter ptr += 2:" << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer value: " << *ptr << endl;
    
    ptr--; // Move pointer back by 1 element
    cout << "\nAfter ptr--:" << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer value: " << *ptr << endl;
    
    return 0;
}