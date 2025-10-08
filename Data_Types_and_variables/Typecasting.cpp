#include<iostream>
using namespace std;
int main()
{
    int x = 72, y = 5;
    double div1 = x / y;
    double div2 = (double(x) / y);
    char sub = x - y;

    cout << "Division of (x/y): " << div1;
    cout << "\nDivision ((double)(x)/y): " << div2;
    cout << "\nOutput shows in Ascii Value (x-y): " << sub;
}