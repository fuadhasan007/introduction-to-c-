#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;  // same as &arr[0]

    cout << "arr[0] = " << arr[0] << endl;
    cout << "*p = " << *p << endl;       // same as arr[0]
    cout << "*(p+1) = " << *(p + 1) << endl;  // arr[1]
    cout << "*(p+2) = " << *(p + 2) << endl;  // arr[2]

    return 0;
}
