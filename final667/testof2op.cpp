#include <iostream>
using namespace std ;
void gradecalculator(int marks){
    if (marks >=90){
        cout<<"grade is A+"<<endl;}
        else if (marks >=80){
            cout<<"grad beis b+"<<endl;}
            else if (marks >=70){
                cout<<"grade is c+"<<endl;}
                else if (marks >=60){
                    cout<<"grade is d+"<<endl;}
                    else{
                        cout<<"grade is f"<<endl;}}

        
    
int main(){
    int marks;
        cin>>marks;
            cout<<"enter your marks"<<endl;
               gradecalculator(marks);//function call by value
                                 
              
            return 0;
}
