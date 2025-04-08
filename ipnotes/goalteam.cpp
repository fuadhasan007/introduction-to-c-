#include <iostream>
using namespace std;

int main() {
    int teamA, teamB;
    cout << "enter the numbers of the goals scored by tream A and team B:";
    cin >> teamA >> teamB;
    if (teamA > teamB){
        cout << "team A wins " <<endl;
    } 
    else if ( teamA > teamB){
        cout<< "team B wins" <<endl;

    }
    
    else{
        cout << "draw" <<endl;
