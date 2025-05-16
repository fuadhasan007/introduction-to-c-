#include <iostream>
     using namespace std;
        void expenses(int food,int transport){
             int total=food +transport;
                cout <<"total expenses"<<total<<endl;
             } 


             int main(){
                    int food,transport;
                        cout<<"enter your food expenses"<<endl;
                            cin>>food;
                                cout<<"enter your transport expenses"<<endl;
                                    cin>>transport;
                                        expenses(food,transport);
                                            return 0;
             }