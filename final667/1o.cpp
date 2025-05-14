//even odd using functions use parameter 

#include <iostream>
using namespace std;            
void evenOdd(int n){
    if (n % 2 == 0){
        cout << n << " is even" << endl;
    }
    else{
        cout << n << " is odd" << endl;
    }
}
int main(){
    for (int i = 0; i < 9; i++){
        evenOdd(i);
    }
    return 0;
}
