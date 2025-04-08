/*Write a C++ program that finds the sum and average of the first 20 natural numbers using a for loop*/
#include <iostream>
using namespace std;
int main() {
    double sum = 0;
    int count = 20;

    for (int i = 1; i <= count; i++) {
        sum = sum + i;
    }
    double average =  sum / count;
    cout << "Sum of the first " << count << " natural numbers is: " << sum << endl;
    cout << "Average of the first " << count << " natural numbers is: " << average << endl;
    return 0;
}