#include <iostream>
using namespace std;

void myFunction();
void myFunction(int);

int main()
{
   myFunction();

   int num;
   cout<<"Enter a number: ";
   cin>>num;

   myFunction(num);

   cout<<endl;
   return 0;
}

void myFunction()
{
   cout<<"---Welcome to the Portal---\n";
}
void myFunction(int x)
{
   cout<<"You entered: "<<x;
}