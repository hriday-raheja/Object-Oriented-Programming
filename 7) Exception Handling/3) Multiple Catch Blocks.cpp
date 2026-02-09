#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 for int error, 2 for char error: ";
    cin >> choice;

    try
    {
        if(choice == 1)
            throw 100;
        else
            throw 'A';
    }
    catch(int x)
    {
        cout << "Integer exception: " << x;
    }
    catch(char c)
    {
        cout << "Character exception: " << c;
    }

    return 0;
}

