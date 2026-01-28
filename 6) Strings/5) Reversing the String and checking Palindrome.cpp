#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string to reverse: ";
    cin >> s;

    string rev1 = "", rev2;

    // METHOD 1: Logic
    for(int i = s.length() - 1; i >= 0; i--)
        rev1 += s[i];
    cout << "Reverse (Logic): " << rev1 << endl;

    // METHOD 2: Direct function
    rev2 = string(s.rbegin(), s.rend());
    cout << "Reverse (Function): " << rev2 << endl;

    // METHOD 3: Two-pointer (Palindrome check)
    int i = 0, j = s.length() - 1;
    bool flag = true;

    while(i < j)
    {
        if(s[i] != s[j])
        {
            flag = false;
            break;
        }
        i++; j--;
    }

    if(flag)
        cout << "Result: Palindrome (Two-Pointer Method)" << endl;
    else
        cout << "Result: Not a Palindrome" << endl;

    return 0;
}

