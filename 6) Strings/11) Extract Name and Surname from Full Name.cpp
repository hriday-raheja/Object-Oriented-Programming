#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    int pos = 0;

    cout << "Enter Full Name (Name Surname): ";
    getline(cin, fullName);

    // LOGIC: find space position
    while(fullName[pos] != ' ')
        pos++;

    cout << "Name: ";
    for(int i = 0; i < pos; i++)
        cout << fullName[i];

    cout << "\nSurname: ";
    for(int i = pos + 1; fullName[i] != '\0'; i++)
        cout << fullName[i];

    // DIRECT FUNCTION using substr()
    // cout << "\nName: " << fullName.substr(0, pos);
    // cout << "\nSurname: " << fullName.substr(pos + 1);

    return 0;
}

