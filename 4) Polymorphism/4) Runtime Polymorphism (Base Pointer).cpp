#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout<<"Animal makes sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout<<"Dog barks";   // overridden function
    }
};

int main()
{
    Animal *a;
    Dog d;

    a = &d;           // base pointer to derived object
    a->sound();       // runtime binding

    return 0;
}

