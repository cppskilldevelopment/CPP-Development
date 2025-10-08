#include<iostream>
using namespace std;
int main()
{
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if(username=="admin" && password=="1234")
    {
        cout << "Login Successfull..\n";
        cout<<"Welcome To Main Screen..";
    }
    else
    {
        cout << "Login Failed!!!!\n";
    }
    
    
}