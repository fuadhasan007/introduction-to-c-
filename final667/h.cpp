#include <iostream>
using namespace std;

int sum(int x, int y);
float sub();

int main() {
    int a, b;
    cout << "Enter The Number 1: ";
    cin >> a;
    cout << "Enter The Number 2: ";
    cin >> b;

    int total = sum(a, b);
    cout << "Total Sum Is: " << total << endl;

    // Uncomment the following line if you want to use sub()
     sub();

    return 0;
}

int sum(int x, int y) {
    return x + y;
}

float sub() {
    float a, b;
    cout << "Enter The Number 1: ";
    cin >> a;
    cout << "Enter The Number 2: ";
    cin >> b;
    float subtract = a - b;
    cout << "Total Subtract Is: " << subtract << endl;
    return subtract;
}
