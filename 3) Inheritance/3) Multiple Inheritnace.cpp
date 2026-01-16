#include<iostream>
using namespace std;

class Student
{
public:
    void showStudent()
    {
        cout<<"Student Details";   // function of Student class
    }
};

class Sports
{
public:
    void showSports()
    {
        cout<<"\nSports Details";  // function of Sports class
    }
};

class Result : public Student, public Sports   // multiple inheritance
{
public:
    void showResult()
    {
        cout<<"\nResult Generated";  // function of Result class
    }
};

int main()
{
    Result r;
    r.showStudent();   // calling Student class function
    r.showSports();    // calling Sports class function
    r.showResult();    // calling own function
    return 0;
}

