#include <iostream>
using namespace std;
int main (void){
    int y ;
    cout <<"enter number : " ;
    cin >> y;
    cout<<"y = "<<y<<endl;
    cout<<"&y="<<&y<<endl;
    int *u;
    cout<<"&u="<<&u<<endl;
    u =&y;
    cout<<"u ="<<u<<endl;
    cout<<"*u="<<*u<<endl;
    *u=90;
    cout<<"*u="<<*u<<endl;
    cout<<"y="<<y<<endl;
    y=78;
    cout<<"y="<<y<<endl;
    cout<<"*u="<<*u<<endl;
    


















 return 0;   
}