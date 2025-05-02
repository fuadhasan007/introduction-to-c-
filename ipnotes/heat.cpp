// Frequency of Elements: Count the frequency of each string in an array using a function
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string arr[] = {"apple", "banana", "apple", "orange", "banana", "apple"};
    int size = sizeof(arr) / sizeof(arr[0]);
    map<string, int> freq; // Map to store frequency of each string

    // Count frequency of each string
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Print frequency of each string
    cout << "Element Frequency" << endl;
    for (auto it : freq) {
        cout << it.first << "       " << it.second << endl;
    }

    return 0;
}