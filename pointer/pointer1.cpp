#include<iostream>
using namespace std;
int main()
{
    string con ="hello";
    cout<< &con << endl; // prints the address of the string variable
    string* con2 = &con; // &con gives the address of the string variable. *con2 is a pointer to that address.

    cout<< "the value of con2 is : " << con2 << endl; // prints the address of the string variable
    cout<< "the value of *con2 is : " << *con2 << endl; // prints the value of the string variable
    return 0;
}