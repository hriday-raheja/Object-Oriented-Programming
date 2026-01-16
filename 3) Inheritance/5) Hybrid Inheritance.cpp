#include<iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout<<"Person Class";   // base class
    }
};

class Student : public Person   // single inheritance
{
public:
    void showStudent()
    {
        cout<<"\nStudent Class";
    }
};

class Sports
{
public:
    void showSports()
    {
        cout<<"\nSports Class";
    }
};

class Result : public Student, public Sports   // multiple inheritance
{
public:
    void showResult()
    {
        cout<<"\nResult Class";
    }
};

int main()
{
    Result r;
    r.showPerson();   // from Person
    r.showStudent();  // from Student
    r.showSports();   // from Sports
    r.showResult();   // own function
    return 0;
}

