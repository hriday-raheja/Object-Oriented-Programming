#include<iostream>
using namespace std;

class Student
{
    int roll;
    int marks;

public:
    void setData(int r, int m)
    {
        roll = r;      // assigning roll
        marks = m;     // assigning marks
    }

    void show()
    {
        cout<<"\nRoll: "<<roll;      // printing roll
        cout<<" Marks: "<<marks;     // printing marks
    }
};

int main()
{
    Student s1, s2;     // two objects

    s1.setData(101,85); // first student
    s2.setData(102,90); // second student

    s1.show();         // showing first
    s2.show();         // showing second

    return 0;
}

