#include<iostream>
using namespace std;

class Bank
{
    float balance;           // private data

public:
    void setBalance(float b)
    {
        balance = b;         // setting balance
    }

    void showBalance()
    {
        cout<<"\nBalance: "<<balance;   // showing balance
    }
};

int main()
{
    Bank b;
    b.setBalance(5000);      // accessing via method
    b.showBalance();
    return 0;
}

