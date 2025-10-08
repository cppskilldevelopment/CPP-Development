#include<iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout << "1.Say Hello\n";
        cout << "2.Say Bye\n";
        cout << "3.Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Hello Ashu\n";
            break;
        case 2:
            cout << "Bye Ashu\n";
            break;
        case 3:
            cout << "Exiting....\n";
            break;

        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    } while (choice != 3);
    
}