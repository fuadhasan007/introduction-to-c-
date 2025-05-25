//Class Object Code
#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountholder;
    int accountnumber;
    double balance;

public:
    BankAccount()//Constructor - set the default values
    {
        accountholder = "Provat";
        accountnumber = 404;
        balance = 100.24;
        cout<<"Initial Balance: "<<balance<<endl;
     
        cout<<"Its from the Default Constructor"<<endl;
    }
    //parameterized constructor - set the values by argument
    BankAccount(string Name, int number, double Initalbalance)
    {
        accountholder = Name;
        accountnumber = number;
        balance = Initalbalance;
    }
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else{
            cout<<"Invalid";
        }
    }
    void withdraw (double amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<"Withdraw amount: "<<amount<<endl;
        }
        else{
            cout<<"Invalid";
        }
    }
    void display()
    {
        cout<<"Name: "<<accountholder<<endl;
        cout<<"Account Number: "<<accountnumber<<endl;
        cout<<"Remaining Balance: "<<balance<<endl;
    }
    void display1()
    {
        cout<<"Initial Balance: "<<balance<<endl;
    }
    ~BankAccount()//destructor - to destroy the memory values
    {
        cout<<"Thank You"<<endl;
    }
 
};
 
int main()
{
    BankAccount ac1;
    ac1.deposit(500);
    ac1.withdraw(400);
    ac1.display();
    cout<<"-----------------------"<<endl;
    BankAccount ac2("Rifat", 405, 100.96);
    ac2.display();
    ac2.display1();
    cout<<"-----------------------"<<endl;
    ac2.deposit(500);
    ac2.deposit(1000);
    ac2.withdraw(1300);
    ac2.display();
 
 
    return 0;
}