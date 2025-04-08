/*Write a C++ program that asks the user to enter numbers and finds the sum of only positive
numbers. Use a do-while loop to keep taking input. The program should stop if the user
enters a negative number, but the negative number should not be included in the sum.
Finally, display the total sum of all positive numbers entered*/
#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter a number (negative to stop): ";
        cin >> number;

        if (number >= 0) {
            sum = sum + number;
        }
    } while (number >= 0);

    cout << "The total sum of positive numbers is: " << sum << endl;

    return 0;
}