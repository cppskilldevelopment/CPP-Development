#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
}