// print the table of 'n' .here n is a integer which user will enter.
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number of table you want to print : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << " ";
    }
}