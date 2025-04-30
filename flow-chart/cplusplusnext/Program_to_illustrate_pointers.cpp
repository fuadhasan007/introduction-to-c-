#include <iostream>
using namespace std;
int main (void){
int x = 10;
cout << "x = " << x << endl;
cout << "&x = " << &x << endl;
int *z;
cout << "&z = " << &z << endl;
z = &x;
cout << "z = " << z << endl;
cout << "*z = " << *z << endl;
*z = 4;
cout << "*z = " << *z << endl;
cout << "x = " << x << endl;
x = 6;
cout << "x = " << x << endl;
cout << "*z = " << *z << endl;
return 0;
}