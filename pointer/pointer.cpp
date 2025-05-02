//C++ References
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // ----------- checking using & symbol
    //int x = 5; // suppose the location of x is 0x1243
    //int &z = x; // using & symbol telling z to refer the location of x. now both x and z variable is referenceing or pointing or shareing the same memory location.
    //z = 99999; // now changeing the value of any value of those variable will effect eatch other
    //cout<< x; // 99
    //cout << "Location of X = " << &x << " \nLocation of Z = " << &z;
    
    
    // -----------------checking without using & symbol
    //int x = 5; // x is referenceing xyz memory location
    //int z = x; // x is referenceing abc memory location
    //z = 999999;
    //cout<< x;
    //cout << "Location of X = " << &x << " \nLocation of Z = " << &z;
    

    return 0;
}