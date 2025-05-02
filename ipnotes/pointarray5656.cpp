#include <iostream>
// \t;\t;
using namespace std;
int main(void){

    float M[5] = {22.5, 34.8, 46.8, 59.1, 68.3}, *p;
    int i;
  
    for(i=0; i<3; i++)
      cout<<"M["<< i <<"] @"<< &M[i] <<": "<< M[i] <<endl;
      cout<<"p--"<<endl;
    for(i=0, p=M; i<7; i++, p++){
      (*p)++; //increases the value at location p
      cout << "\nM[" << i << "] @" << p << ": " << *p;
    }
    cout<<"p--"<<endl;
    p = M;
    cout << "\nValue of M[0]:\n";
    cout << "M[0]\t:\t" << M[0] << endl;
    cout << "*M\t:\t"   << *M   << endl;
    cout << "p[0]\t:\t" << p[0] << endl;
    cout << "*p\t:\t"   << *p   << endl;
  
    cout << "\nValue of M[3]:\n";
    cout << "M[3]\t:\t"   << M[3]   << endl;
    cout << "*(M+3)\t:\t" << *(M+3) << endl;
    cout << "p[3]\t:\t"   << p[3]   << endl;
    cout << "*(p+3)\t:\t" << *(p+3) << endl;
  
    return 0;
  }