#include <iostream>
using namespace std;

int main() {
    int salary, creditScore;

    // Get user input
    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your credit score: ";
    cin >> creditScore;

    if (salary >= 30000) {
        if (creditScore >= 700) {
            cout << "Premium loan" << endl;
        } else if (creditScore >= 600) {
            cout << "Standard loan" << endl;
        } else {
            cout << "Loan is unavailable" << endl;
        }
    } else {
        cout << "Insufficient salary" << endl;
    }

    return 0;
}
