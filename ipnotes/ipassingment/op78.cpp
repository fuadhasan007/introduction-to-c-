#include <iostream>
using namespace std;

int main(void) {
   /* int count = 10;
    int *p;
    p = &count;

    cout << "count = " << count << endl;
    cout << "&count = " << &count << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    int *p;
    int *p1;
    int  x;
    p1 = &x;
    p = p1;
    *p = 4;
   // cout << "x = " << x << endl;
       cout << "p = " << p << endl; 
       cout<<"*p1="<<*p1<<endl;   */




      const char c = 'M', d = 'R'; //f[5];
      const char *cP1 = &c; 
       *cP1 = 'X';
       cP1 = &d;
       cP1 = f;
       cP1++;
       cout<<"cP1 = " << cP1 << endl;
       cout<<"*cP1 = " << *cP1 << endl;
         cout<<"&cP1 = " << &cP1 << endl;
         cout<<"&f = " << &f << endl;
            cout<<"&c = " << &c << endl;
            cout<<"&d = " << &d << endl;
         cout<<"f = " << f << endl;
            cout<<"*f = " << *f << endl;
            cout<<"*cP1 = " << *cP1 << endl;
            //cout<<"*c = " << *c << endl;
            //cout<<"*d = " << *d << endl;





    return 0;
}
