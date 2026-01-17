#include<iostream>
using namespace std;

class Bank
{
    float balance;          // private variable

public:
    Bank()
    {
        balance = 1000;     // initial balance
    }

    void deposit(float amt)
    {
        balance = balance + amt;   // adding amount
    }

    void withdraw(float amt)
    {
        if(amt <= balance)
            balance = balance - amt;  // subtracting amount
        else
            cout<<"\nInsufficient Balance";
    }

    void show()
    {
        cout<<"\nCurrent Balance: "<<balance;
    }
};

int main()
{
    Bank b;
    b.deposit(500);        // depositing
    b.withdraw(300);      // withdrawing
    b.show();             // showing balance
    return 0;
}

