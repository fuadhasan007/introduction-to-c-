#include <iostream>
using namespace std;
//This program will determine the absolute value of a number
int main() {
    int number;
    //Check if the number is negative
    cout<<"type in your number: "<<endl;
    cin>>number;
    if (number < 0 )
    number = -number;//make the number positive
    cout<<"The absolute value is "<<number<<endl;
    return 0;

}