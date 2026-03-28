// if the age of ram , shyam, and ajay are input through the keybord , write a program to find out who is the youngest  among them. use nested if-else.
#include <iostream>
using namespace std;
int main()
{
    int ram, shyam, ajay;
    cout << "Enter the age of ram: ";
    cin >> ram;
    cout << "Enter the age of shyam: ";
    cin >> shyam;
    cout << "Enter the age of ajay: ";
    cin >> ajay;

    if (ram < shyam)
    {
        if (ram < ajay)
        {
            cout << ram << " ram is the youngest among them";
        }
        else
        {
            cout << ajay << " ajay is the youngest among them";
        }
    }
        else
        {
            if (shyam < ajay)
            {
                cout << shyam << " shyam is the youngest among them";
            }
            else
            {
                cout << ajay << "  ajay is the youngest among them";
            }
        }
    
}