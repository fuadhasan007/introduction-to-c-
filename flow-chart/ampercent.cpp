
#include <iostream>

using namespace std; 

int main() {

  int x=560; 

  int *a; 

  a=&x;

  (*a)++; 
  cout<<"Address of X: "<<&x<<endl; 

  cout<<"Address of A: "<<&a<<endl; 

  cout<<"Value of A: "<<x<<endl; 

  cout<<"Value of *a: "<<*a<<endl;
 
    return 0;

}
 