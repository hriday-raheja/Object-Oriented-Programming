#include <iostream>
using namespace std;

int main()
{
    int arr[5], index;

    cout << "Enter index (0-4): ";
    cin >> index;

    try
    {
        if(index < 0 || index >= 5)
            throw index;

        cout << "Valid index";
    }
    catch(int)
    {
        cout << "Error: Index out of bounds";
    }

    return 0;
}

