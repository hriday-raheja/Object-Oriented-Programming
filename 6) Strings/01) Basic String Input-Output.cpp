#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter a single word: ";
    cin >> s1;                      // reads one word
    cout << "You entered (word): " << s1 << endl;

    cin.ignore();                   // clear input buffer

    cout << "Enter a full line: ";
    getline(cin, s2);               // reads full line
    cout << "You entered (line): " << s2 << endl;

    return 0;
}

