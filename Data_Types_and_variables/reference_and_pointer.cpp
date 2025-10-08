#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &ref = a;
    int *ptr = &a;
    cout << "a= " << a << endl;
    cout << "Refernce= " << ref << endl;
    cout << "Pointer= " << *ptr << endl;
}