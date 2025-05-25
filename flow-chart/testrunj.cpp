#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int id;
        void displayInfo(){
            cout << " Student Name: " << name << endl;
            cout << " Student ID: " << id << endl;
        }

    };
    
  



int main (){
   
    student student1 ;
    student student2 ;
    student1.name = "rafe";
    student1.id = 2560;
    student2.name = "javad";
    student2.id = 2561; 
    student1.displayInfo();
    student2.displayInfo();



return 0;
}
