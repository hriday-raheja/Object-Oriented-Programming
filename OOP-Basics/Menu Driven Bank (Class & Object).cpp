#include<iostream>
using namespace std;

class Bank
{
    float balance;      // stores balance

public:
    void setBalance(float b)
    {
        balance = b;    // setting initial balance
    }

    void deposit(float amt)
    {
        balance = balance + amt;   // adding amount
    }

    void withdraw(float amt)
    {
        if(amt <= balance)
            balance = balance - amt; // subtracting amount
        else
            cout<<"\nInsufficient Balance";
    }

    void show()
    {
        cout<<"\nCurrent Balance: "<<balance; // showing balance
    }
};

int main()
{
    Bank b;
    int ch;
    float amt;

    b.setBalance(1000);   // initial balance

    do
    {
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Display Balance";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter amount: ";
                cin>>amt;
                b.deposit(amt);     // calling deposit
                break;

            case 2:
                cout<<"Enter amount: ";
                cin>>amt;
                b.withdraw(amt);    // calling withdraw
                break;

            case 3:
                b.show();           // showing balance
                break;
        }
    } while(ch != 4);

    return 0;
}
