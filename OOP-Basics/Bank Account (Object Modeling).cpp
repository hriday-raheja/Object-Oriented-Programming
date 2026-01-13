#include<iostream>
using namespace std;

class BankAccount
{
    int accNo;
    float balance;

public:
    void input()
    {
        cout<<"Enter Account Number: ";
        cin>>accNo;          // taking account number
        cout<<"Enter Balance: ";
        cin>>balance;       // taking balance
    }

    void display()
    {
        cout<<"\nAccount No: "<<accNo;  // printing account no
        cout<<"\nBalance: "<<balance;  // printing balance
    }
};

int main()
{
    BankAccount b1;     // creating object
    b1.input();        // taking data
    b1.display();      // displaying data
    return 0;
}

