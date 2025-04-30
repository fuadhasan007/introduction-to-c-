#include <iostream>
using namespace std;

int main() {
    const int numStudents = 5; // Number of students
    int marks[numStudents];    // Array to store marks

    // Input marks for each student
    cout << "Enter marks for " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display marks for each student
    cout << "\nMarks of students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}