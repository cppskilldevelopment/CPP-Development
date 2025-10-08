#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter String:";
    getline(cin, str);
    int len = str.size();
    for (int i = len; i  >= 0;i--)
    {
        cout <<str[i];
    }

}