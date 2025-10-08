#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Your Marks(0-100): ";
    cin >> marks;
    if(marks>=90 && marks<100)
    {
        cout << "You Got Grade A+" << endl;
    }
    else if (marks >=80 && marks < 90)
    {
        cout << "You Got Grade A" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "You Got Grade B+" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "You Got Grade B" << endl;
    }
    else
    {
        cout << "You Got Grade C" << endl;
    }
    

}