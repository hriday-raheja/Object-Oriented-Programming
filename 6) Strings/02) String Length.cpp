#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int len = 0;

    cout << "Enter string: ";
    cin >> s;

    // LOGIC: length calculation using traversal (index-based)
    for(int i = 0; s[i] != '\0'; i++)
        len++;

    cout << "Length (Logic): " << len;

    // Using direct function
    // cout << "Length (Function): " << s.length();

    return 0;
}

