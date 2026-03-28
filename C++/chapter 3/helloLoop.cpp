// print hello world 'n ' times. take 'n' as input from user.
#include <iostream>
using namespace std;
int main(){

int n ;
cout<< "enter the number of times you want to print hello world : " ;
cin>>n;

for (size_t i = 1; i <= n; i++)
{
    cout<< "hello world " << endl ;
}

}