// take postive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number :" ;
cin>> n;
if (n>99 && n<1000)
{
    cout<< "it is a three digit number";
}
else
{
    cout<<"it is not a three digit number";
}

}