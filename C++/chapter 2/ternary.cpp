//write a program to ternary operator and take a postive integer and print even or odd in input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n : ";
    cin>> n;
    (n%2==0) ? cout<< "even": cout<<"odd";
}