//array matrix matlipication basic code 
#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], c[10][10];
    int row1, col1, row2, col2;

    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> b[i][j];
        }
    }

    // Check if multiplication is possible
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible." << endl;
        
    }

    // Initialize the result matrix
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            c[i][j] = 0;
        }
    }
    return 0;}