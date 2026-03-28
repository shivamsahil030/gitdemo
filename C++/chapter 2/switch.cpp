// write a program to create a calcuator that performs basic arithmetic operations (add,sub,multiply,divide)using switch case,
//  and the calculator should input two number and an operator from user.
#include <iostream>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    char op;
    cin >> op;
    int n2;
    cin >> n2;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "invalid ";
        break;
    }
}