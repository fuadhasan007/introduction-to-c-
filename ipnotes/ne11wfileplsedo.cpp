#include <iostream>
using namespace std;
//Task: Sum of even numbers upto user input ( Take User input as 20)
  
int main()
{
    int N; 
    cout<<"emter a number for sum "<<endl;
    cin>>N;
   int sum = 0;
   for(int i=0; i<=N;i=i+2)
   sum= sum+i;
   cout<<"sum of 20 even numbers is: ";cout<<sum<<endl;//for odd number just replace the value of i by i=1

   
    
     return 0;


}