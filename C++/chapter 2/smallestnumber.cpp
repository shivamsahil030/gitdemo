// take 3 postive integer inputs from user and print the greatest of them.
#include <iostream>
using namespace std;
int main(){
    int a,b,c ;
    cout<< "enter 1st number";
    cin>> a;
     cout<< "enter 2nd number";
    cin>> b;
     cout<< "enter 3rd number";
    cin>> c;
if (a<b && a<c)
{
    cout<< " 1st number is smallest number: ";
}
else if (b<a && b<c)
{
        cout<< " 2nd number is smallest number: ";

}
else  
{
        cout<< " 3rd number is smallest number: ";

}


    
}