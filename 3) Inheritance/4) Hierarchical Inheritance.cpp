#include<iostream>
using namespace std;

class Shape
{
public:
    void show()
    {
        cout<<"This is a shape";   // base class
    }
};

class Circle : public Shape
{
public:
    void showCircle()
    {
        cout<<"\nThis is a circle";
    }
};

class Rectangle : public Shape
{
public:
    void showRectangle()
    {
        cout<<"\nThis is a rectangle";
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.show();
    c.showCircle();

    r.show();
    r.showRectangle();

    return 0;
}

