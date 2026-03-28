//take a postive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :" ;
    cin>> n;
    if (n%5 == 0 && n%3 == 0) // (n%15 == 0) also use this
    {
        cout <<"it is divisible by 5 and 3";
    }
    else
    {
        cout<<"it is not divisible by 5 and 3";

    }
    
}