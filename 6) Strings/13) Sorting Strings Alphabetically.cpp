#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

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
    cout<<"\nBubble sort using lexicographical (alphabetical) comparison"<<endl;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])     // ASCII-based comparison
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nStrings sorted alphabetically:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;

    /* ---------------- FUNCTION METHOD ---------------- 
    sort(arr, arr + n);   // STL sort function

    cout << "\nStrings sorted alphabetically:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;*/

    return 0;
}

