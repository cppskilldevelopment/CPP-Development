#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number:";
    cin >> num;
    if (num < 0)
    {
        cout << "Number is Negative\n";
    }
    else
    {
        cout << "Number is Positive\n";
    }
}