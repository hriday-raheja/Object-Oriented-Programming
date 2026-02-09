#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 3.14;   // double
    }
    catch(double d)
    {
        cout << "Double exception: " << d;
    }

    return 0;
}

