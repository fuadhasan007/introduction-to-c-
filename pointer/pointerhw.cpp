//C++ References
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   /* string ptx="namul vai";
    string &pp8=ptx;
    pp8="anamul vai";//ten letters for that the size will be 10
    cout<<ptx<<endl;
    cout<<pp8<<endl;
    cout<<&ptx<<endl;
    cout<<&pp8<<endl;//adress
    cout<<"-------------------------"<<endl;
    cout<<ptx.size()<<endl;
    cout<<pp8.size()<<endl;
    cout<<ptx.capacity()<<endl;
    cout<<pp8.capacity()<<endl;
    cout<<ptx.max_size()<<endl;
    cout<<pp8.max_size()<<endl;
    cout<<ptx.empty()<<endl;//by emptying the string now we have to assign new variables to it 
    cout<<pp8.empty()<<endl;
    */

    int x=30;
    int z=70;
    z=x;
    cout<<x<<endl;
    cout<<z<<endl;
    cout<<&x<<endl;//so the adresses are dffirent cz they don't share the same memory location
    cout<<&z<<endl;
    cout<<"-------------------------"<<endl;
    z=90;
    cout<<"using oparators ----------------"<<endl;

    int sum=x+z;
    cout<<sum<<endl;
    int sub=x-z;
    cout<<sub<<endl;
    int mul=x*z;
    cout<<mul<<endl;
    int  div=x/z;//pp
    cout<<div<<endl;
    int mod =x%z;//for remainder
    cout<<mod<<endl;
    cout<<"=+-------------------------"<<endl;
    sum +=10;
    cout<<sum<<endl;
    sub -=19;
    cout<<sub<<endl;
    cout<<"some math funtions -------------------------"<<endl;
    x=(pow(3,2));
    cout<<x<<endl;
    z=(pow(3,3));
    cout<<z<<endl;
    z=(sqrt(100));
    cout<<z<<endl;
    z=ceil(x);
    cout<<z<<endl;











    return 0;
}