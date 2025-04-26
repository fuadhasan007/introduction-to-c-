#include <iostream>
using namespace std;
int main(){
    float weight,bmi,height;

    cout<<"enter your wieght in  kg :"<<weight<<endl;
    cout<<"enter your hight in meter :"<<height<<endl;
    bmi = weight / (height * height);
    cout<<"your bmi is :"<<bmi<<endl;
    if (bmi<18.5)cout<<"youre under weught "<<endl;
    else if (bmi >=18.5 && bmi <25) cout<<"youre normal"<<endl;
    else if (bmi >=25 && bmi <30) cout<<"youre overweight"<<endl;
  
    else
    cout << "You are obese." << endl;




















    return 0;
}
 
  
