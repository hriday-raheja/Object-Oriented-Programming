#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, s2;
    char oldc, newc;

    cout << "Enter a string: ";
    cin >> s;
    s2 = s;

    cout << "Enter character to replace: ";
    cin >> oldc;
    cout << "Enter new character: ";
    cin >> newc;

    // LOGIC
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == oldc)
            s[i] = newc;

    cout << "String after replace: " << s << endl;

    // DIRECT FUNCTION
    for(int i = 0; i < s2.length(); i++)
        if(s2[i] == oldc)
            s2[i] = newc;


    return 0;
}

