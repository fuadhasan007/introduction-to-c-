#include <iostream>
using namespace std;
 
class studentinfo{
    public:
    string name; 
    float cgpa; 
    string ID;
    int credit; 
    float printbalance; 
    void input()
    {
    cout<<"Enter The Student Name: "; 
    cin>>name; 
    cout<<"Enter The student CGPA: "; 
    cin>>cgpa; 
    cout<<"Enter The Student ID: "; 
    cin>>ID;
    cout<<"Enter The Student Completed Credit: "; 
    cin>>credit;
    cout<<"Enter The Student Print Balance: "; 
    cin>>printbalance;
    }
    void display()
    {
    cout<<"Student Name: "<<name<<endl; 
    cout<<"Student CGPA: "<<cgpa<<endl; 
    cout<<"Student ID: "<<ID<<endl; 
    cout<<"Student Credit: "<<credit<<endl; 
    cout<<"Student Print balance: "<<printbalance<<endl;  
    }
}; 
int main() {
    studentinfo s1, s2={"Rudro", 3.65, "23-93113-3", 15, 200};
    s1.input(); 
    s2.display();
    s1.display(); 

 
 
    return 0;
}