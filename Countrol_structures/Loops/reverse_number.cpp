#include<iostream>
using namespace std;
int main()
{
    int num, rem,rev = 0;
    cout << "Enter a number:  ";
    cin >> num;
    int temp = num;
    while (num)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    cout << "Before Reverse the Number: " << temp;
    cout << "\nAfter Reverse the Number: " << rev;
}