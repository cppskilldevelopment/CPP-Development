#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter char value:";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':
        cout << "It is Vowel..";
    break;
    case 'e':
    case 'E':
        cout << "It is Vowel..";
        break;
    case 'i':
    case 'I':
        cout << "It is Vowel..";
        break;
    case 'o':
    case 'O':
        cout << "It is Vowel..";
        break;
    case 'u':
    case 'U':
        cout << "It is Vowel..";
        break;

    default:
        cout << "Not a Vowel";
        break;
    }
}