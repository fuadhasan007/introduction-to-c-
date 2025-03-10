#include <iostream>
using namespace std;
//program to determine if a number is even or odd
int main() {
    int number_to_test, remainder;
    cout<<"enter your number to be tested:"<<endl;
    cin>>number_to_test;

    remainder = number_to_test % 2;
    if ( remainder == 0)
    cout<<"The number is even."<<endl;
    else
    cout<<"the number is odd."<<endl;
    return 0; 
}