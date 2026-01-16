#include<iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout<<"Class A";     // base class
    }
};

class B : public A
{
public:
    void showB()
    {
        cout<<"\nClass B";   // derived from A
    }
};

class C : public B
{
public:
    void showC()
    {
        cout<<"\nClass C";   // derived from B
    }
};

int main()
{
    C obj;
    obj.showA();   // from class A
    obj.showB();   // from class B
    obj.showC();   // from class C
    return 0;
}

