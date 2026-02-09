#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, result;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    // LOGIC
    result = a;
    for(int i = 0; b[i] != '\0'; i++)
        result += b[i];

    cout << "Concatenation (Logic): " << result << endl;

    // DIRECT FUNCTION
    cout << "Concatenation (Function): " << a.append(b) << endl;

    return 0;
}
