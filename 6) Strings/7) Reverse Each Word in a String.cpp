#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string (multiple words): ";
    getline(cin, s);

    cout << "Output (Logic - each word reversed): ";

    string word = "";
    for(int i = 0; i <= s.length(); i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            for(int j = word.length() - 1; j >= 0; j--)
                cout << word[j];
            cout << " ";
            word = "";
        }
        else
            word += s[i];
    }

    cout << endl;
    return 0;
}

