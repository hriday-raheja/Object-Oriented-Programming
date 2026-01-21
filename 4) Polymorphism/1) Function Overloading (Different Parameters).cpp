#include<iostream>
using namespace std;

class Add
{
public:
    int sum(int a, int b)
    {
        return a + b;          // adds two numbers
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;     // adds three numbers
    }
};

int main()
{
    Add a;
    cout<<"Sum of 2 numbers: "<<a.sum(10,20);
    cout<<"\nSum of 3 numbers: "<<a.sum(10,20,30);
    return 0;
}

