#include<iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student(int r, float m)     // parameterized constructor
    {
        roll = r;              // assigning roll
        marks = m;             // assigning marks
    }

    void show()
    {
        cout<<"\nRoll: "<<roll;
        cout<<"\nMarks: "<<marks;
    }
};

int main()
{
    Student s1(101, 85.5);     // passing values to constructor
    s1.show();                // displaying data
    return 0;
}

