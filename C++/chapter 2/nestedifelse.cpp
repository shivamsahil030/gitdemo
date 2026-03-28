// take 3 postive integer input and print the greatest of them without using multiple conditions.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 1st num : ";
    cin >> a;
    cout << "enter 2nd num : ";
    cin >> b;
    cout << "enter 3rd num : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << "  is greatest. ";
        }
        else {
            cout<< c << "is greatest.";
        }
    }
    else
    {
        if (b>c)
        {
            cout << b << "is greatest.";
        }
        else
        {
            cout<< c <<   "is greatest.";
        }
        
        
    }
    
}