#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Three numbers:";
    cin >> a >> b >> c;
    if(a>b && a>c)
        cout << "Number " << a << " is largest\n";
    else if(b>a && b>c)
        cout << "Number " << b << " is largest\n";
    else
        cout << "Number " << c << " is largest\n";
}