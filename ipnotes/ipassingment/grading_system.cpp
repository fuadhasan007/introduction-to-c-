/*Write a C++ program to assign grades based on a student's percentage. A grade of A+ is given for 90-100%, A for 85-<90% B+ for 80-<85%, B for 75-<80%, C+ for 70-<75%, C for 65-<70%, D+ for 60-<65%, D for 50-<60%, and F for below 50%.
If a student with a C grade attended 90% or more of the classes, their grade should change to a B using loops  A+ = 4.00 A=3.75 B+ = */
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numStudents;Key Points
    Dynamic Arrays:
    
    The arrays are sized dynamically based on the number of students entered by the user.
    Grade Adjustment:
    
    Students with a C grade and 90% or higher attendance have their grades upgraded to B.
    Scalability:
    
    The program can handle any number of students, limited only by system memory.
    Input Validation:
    
    The program assumes valid input (e.g., non-negative percentages and attendance). Additional checks could be added for robustness.
    Let me know if you need further clarification!
    cout << "Enter the number of students: ";
    cin >> numStudents;

    string names[numStudents];
    float percentages[numStudents];
    char grades[numStudents];

    // Input student names and percentages
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter percentage of student " << i + 1 << ": ";
        cin >> percentages[i];
    }

    // Assign grades based on percentages
    for (int i = 0; i < numStudents; i++) {
        if (percentages[i] >= 90) {
            grades[i] = 'A';
        } else if (percentages[i] >= 85) {
            grades[i] = 'A';
        } else if (percentages[i] >= 80) {
            grades[i] = 'B';
        } else if (percentages[i] >= 75) {
            grades[i] = 'B';
        } else if (percentages[i] >= 70) {
            grades[i] = 'C';
        } else if (percentages[i] >= 65) {
            grades[i] = 'C';
        } else if (percentages[i] >= 60) {
            grades[i] = 'D';
        } else if (percentages[i] >= 50) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    // Check attendance and update grade for C grade
    for (int i = 0; i < numStudents; i++) {
        float attendance;
        cout << "Enter attendance percentage for " << names[i] << ": ";
        cin >> attendance;

        if (grades[i] == 'C' && attendance >= 90) {
            grades[i] = 'B';
        }
    }

    // Output results
    cout << "\nStudent Grades:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << names[i] << ": " << grades[i] << endl;
    }

    return 0;
}
