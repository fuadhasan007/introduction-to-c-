#include <iostream>
using namespace std;
int main () {
    //choice of the user
    char choice;
    cin >> choice;
    switch(choice) {
        case 'A':
        cout << "Yes";
        break;
        case 'b' :
        cout << "No";
        break;
        case 'm' :
        cout << "Maybe";
        break;
        default:
        cout << "Invaild choice";
        return 0;
        
    }


}