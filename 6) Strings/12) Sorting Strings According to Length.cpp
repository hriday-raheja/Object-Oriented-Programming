#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Comparator function
bool compareLength(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    int n;
    cout << "Enter number of strings you want to sort: ";
    cin >> n;

    string arr[50], temp;

    cout << "Enter " << n << " strings:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    /* ---------------- LOGIC METHOD ---------------- */
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i].length() > arr[j].length())
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nStrings sorted by length:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " (Length = " << arr[i].length() << ")\n";

    /* ---------------- FUNCTION METHOD ---------------- 
    sort(arr, arr + n, compareLength);

    cout << "\nStrings sorted by length (Function):\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " (Length = " << arr[i].length() << ")\n";*/

    return 0;
}

