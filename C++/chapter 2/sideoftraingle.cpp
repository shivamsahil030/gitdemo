//take 3 number input and tell if they can be the side of a traingle.
#include <iostream>
using namespace std;
int main() 
{
int a,b,c ;
cout<< "enter 1st side :" ;
cin >> a;
cout << "enter 2nd side :" ;
cin>> b;
cout << "enter 3rd side :" ;
cin>> c;

if ((a+b)>c && (b+c)>a &&(c+a)>b)
{
    cout<< " these can be the side of a triangle";
}
else
{
    cout<< " these can not be the side of a triangle";
}



}