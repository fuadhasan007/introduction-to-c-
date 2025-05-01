//Frequency of Elements: Count the frequency of each element in an array using a function
#include <iostream>
using namespace std;    
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0}; // Assuming the elements are in the range 0-99

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Print frequency of each element
    cout << "Element Frequency" << endl;
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            cout << i << "       " << freq[i] << endl;
        }
    }

    return 0;
}