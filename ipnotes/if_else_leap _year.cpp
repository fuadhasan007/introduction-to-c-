#include <iostream>
using namespace std;
//program to determaine if a year is a leap year or not 
int main(){
    int year,remainder_4,remainder_100,remainder_400;
    cout << "Enter the year to be tested : "<<endl;
    cin>>year;
    remainder_4 = year % 4;
    remainder_100 = year % 100;
remainder_400 = year % 400;
if ((remainder_4 == 0 && remainder_100 != 0
) || remainder_400 == 0) 
cout<<"It's a leap year."<<endl;
else
cout<<"It's not a leap year."<<endl;
return 0;
}
//output
// Enter the year to be tested :
// 2020
// It's a leap year.
// Enter the year to be tested :
// 2021
// It's not a leap year.

