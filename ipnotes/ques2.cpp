#include <iostream> 
using namespace std;
int main()
{
    int goals;
    cin>>goals;
    if(goals==0){cout<<"Poor performance"<<endl;}
    else if(goals>=1 and goals <=5){cout<<"Average performance"<<endl;}
    else if(goals>=6 and goals<=15)
    {cout<<"good performance"<<endl;}
    else if(goals>=16 and goals<=30)
    {cout<<"excellent performance " <<endl;}
    return 0;


}