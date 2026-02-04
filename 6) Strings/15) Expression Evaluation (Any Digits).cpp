#include <iostream>
#include <string>
using namespace std;

int main()
{
    string exp;
    int num1 = 0, num2 = 0;
    char op;
    int i = 0;

    cout << "Enter expression (example: 1000+300): ";
    cin >> exp;

    // Extract first number
    while(exp[i] >= '0' && exp[i] <= '9')
    {
        num1 = num1 * 10 + (exp[i] - '0');
        i++;
    }

    // Operator
    op = exp[i];
    i++;

    // Extract second number
    while(exp[i] >= '0' && exp[i] <= '9')
    {
        num2 = num2 * 10 + (exp[i] - '0');
        i++;
    }

    // Evaluate expression
    switch(op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}

