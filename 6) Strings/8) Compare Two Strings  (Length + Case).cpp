#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    // LOGIC (length comparison)
    if(a.length() > b.length())
        cout << "Result: First string is longer\n";
    else if(a.length() < b.length())
        cout << "Result: Second string is longer\n";
    else
        cout << "Result: Both strings have equal length\n";

    // DIRECT FUNCTION (case-sensitive comparison)
    if(a.compare(b) == 0)
        cout << "Result: Strings are exactly equal\n";
    else
        cout << "Result: Strings are not equal case wiseHHr\n";

    return 0;
}

