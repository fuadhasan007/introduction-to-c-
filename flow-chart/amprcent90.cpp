#include <iostream>

using namespace std; 

int main() {

    int x = 560;        // Declare an integer x and assign it 560
    int *a;             // Declare a pointer to int
    a = &x;             // Make pointer 'a' point to the address of x

    int count = 0;      // Declare and initialize a counter variable to 0

    // Increment count and print messages
    count++;   // count = 1 after this line
    cout << "Address of X: " << &x << endl;

    count++;   // count = 2 after this line
    cout << "Address of A: " << &a << endl;

    count++;   // count = 3 after this line
    cout << "Value of X: " << x << endl;

    count++;   // count = 4 after this line
    cout << "Value of *a: " << *a << endl;

    // Now we print how many times we've used count++
    cout << "The count has been incremented " << count << " times." << endl;

    return 0;
}
