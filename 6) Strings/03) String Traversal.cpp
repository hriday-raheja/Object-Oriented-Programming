#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    // (A) Using index
    for(int i = 0; i < s.length(); i++)
        cout << s[i] << " ";
    cout << endl;

    // (B) Using range-based loop
    for(char c : s)
        cout << c << " ";

    return 0;
}

