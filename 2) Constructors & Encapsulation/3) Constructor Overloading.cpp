#include<iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student()                 // default constructor
    {
        roll = 0;
        marks = 0;
    }

    Student(int r, float m)   // parameterized constructor
    {
        roll = r;
        marks = m;
    }

    void display()
    {
        cout<<"\nRoll: "<<roll;
        cout<<"\nMarks: "<<marks;
    }
};

int main()
{
    Student s1;              // calls default constructor
    Student s2(102, 90);     // calls parameterized constructor

    s1.display();
    s2.display();

    return 0;
}

