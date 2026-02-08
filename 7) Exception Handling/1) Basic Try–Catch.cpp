#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Inside try block\n";
        throw 10;                 // throwing exception
    }
    catch(int x)
    {
        cout << "Exception caught: " << x;
    }

    return 0;
}

