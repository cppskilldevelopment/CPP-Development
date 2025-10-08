#include<iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition Of two nos is: " <<(a+b);
        break;

    case '-':
        cout << "Substraction Of two nos is: " <<(a-b);
        break;
    case '*':
        cout << "Multiplication Of two nos is: " <<(a*b);
        break;
    case '/':
        if(b!=0)
        cout << "Division of two Nos is : " << (a / b);
        else
        {
            cout << "Division By Zero!!";
        }
        break;

    default:
        cout << "Invalid Operator!";
        break;
    }

}