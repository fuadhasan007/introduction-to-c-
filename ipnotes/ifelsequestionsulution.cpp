#include <iostream>
using namespace std;
int main()
{
    int goal1;
    cout<<"teamA"<<endl;
    cin>>goal1;
    int goal2;
    cout<<"teamB"<<endl;
    cin>>goal2;
    if(goal1>goal2)
    {cout<<"teamA wins"<<endl;}
    else if(goal1<goal2)
    {cout<<"teamB wins"<<endl;
    }
    else {cout<<"both teams played well and its a draw"<<endl;}
    return 0;

}