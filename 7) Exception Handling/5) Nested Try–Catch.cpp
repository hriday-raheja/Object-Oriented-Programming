#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 5;
        }
        catch(int x)
        {
            cout << "Inner catch: " << x << endl;
            throw;              // rethrow
        }
    }
    catch(int y)
    {
        cout << "Outer catch: " << y;
    }

    return 0;
}

