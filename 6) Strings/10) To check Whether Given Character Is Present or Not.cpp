#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char ch;
    bool found = false;

    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter character to search: ";
    cin >> ch;

    // LOGIC
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            found = true;

    if(found)
        cout << "Result (Logic): Character is present\n";
    else
        cout << "Result (Logic): Character is not present\n";

    return 0;
}

