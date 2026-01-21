#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout<<"Drawing Shape";
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout<<"Drawing Circle";   // overridden virtual function
    }
};

int main()
{
    Shape *s;
    Circle c;

    s = &c;
    s->draw();        // calls Circle's draw at runtime

    return 0;
}

