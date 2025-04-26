#include <iostream>
using namespace std;
int main() {
    float n;
    cout<< "aiub grading system:"<<endl;
    cout<<"enter your marks :"<<endl;
    cin>>n;
    if(n>=90)
    { cout<<"grade letter =A+,grade point is 4.00"<<endl;}
    else if (n>=85){cout<<"grade letter =A, grade point is 3.75"<<endl;}
    else if (n>=80){cout<<"grade letter is B+, grade point is 3.50"<<endl;}
    else if (n>=75){cout<<"grade letter is B, grade point is 3.25"<<endl;}
    else if (n>= 70){cout<<"grade letter is C+, grade point is 3.00"<<endl;}
    else if (n>=65){cout<<"grade letter is C,grade point is 2.75 please improve your grade in next semester "<<endl;}
    else if (n>=60){cout<<"grade letter is F, grade point is 0.00 "<<endl;}
    
    
    return 0;


}