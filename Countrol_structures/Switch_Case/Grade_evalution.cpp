#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter Marks (0-100): ";
    cin >> mark;

    switch (mark / 10)
    {
    case 10:
    case 9:
        cout << "Grade A+:";
        break;
    case 8:
        cout << "Grade A:";
        break;
    case 7:
        cout << "Grade B:";
        break;
    case 6:
        cout << "Grade C:";
        break;
    case 5:
        cout << "Grade D:";
        break;
    

    default:
        cout << "Grade F:";
        break;
    }
}