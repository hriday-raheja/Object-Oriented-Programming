#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    int upper=0, lower=0, digit=0, special=0;

    cout << "Enter a string: ";
    getline(cin, s1);
    s2 = s1;

    // LOGIC
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            upper++;
            s1[i] += 32;
        }
        else if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            lower++;
            s1[i] -= 32;
        }
        else if(s1[i] >= '0' && s1[i] <= '9')
            digit++;
        else
            special++;
    }

    cout << "\nConverted String (Logic): " << s1;
    cout << "\nUppercase Count: " << upper;
    cout << "\nLowercase Count: " << lower;
    cout << "\nDigit Count: " << digit;
    cout << "\nSpecial Character Count: " << special << endl;

    // DIRECT FUNCTION
    for(int i = 0; i < s2.length(); i++)
    {
        if(isupper(s2[i])) s2[i] = tolower(s2[i]);
        else if(islower(s2[i])) s2[i] = toupper(s2[i]);
    }

    cout << "\nConverted String (Function): " << s2 << endl;

    return 0;
}

