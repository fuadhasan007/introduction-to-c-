#include <iostream>
using namespace std; 
int sum(int x, int y); 
void sub();
 
int total; 
int main() {
    int a, b;  
    cout<<"Enter The Number 1: "; 
    cin>>a;
    cout<<"Enter The Number 2: "; 
    cin>>b;
    sum(a,b);
    cout<<"Total Sum Is: "<<total<<endl; 
    return 0;
}
int  sum(int x, int y)
{
    total = x+y;
    return total; 
}
void sub()
{
    float a, b, subtract=0; 
    cout<<"Enter The Number 1: "; 
    cin>>a;
    cout<<"Enter The Number 2: "; 
    cin>>b;
    subtract = a-b;
    cout<<"Total Subtract Is: "<<subtract<<endl; 
    //return 0;  
}