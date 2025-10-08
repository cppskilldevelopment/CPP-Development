#include<iostream>
using namespace std;
enum Color
{
    Red,
    Green,
    Blue
};
int main()
{
    Color c=Red;
    cout << "Color value : " << c << endl;
    c = Blue;
    cout << "Color value : " << c << endl;
}