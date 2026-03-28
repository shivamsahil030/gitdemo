//if cost price and selling price of an item is input through the keybord, write a program to determine wether the seller has made profit ot loss and no profit no loss. 
//also determine how much profit he made or loss he incured.
#include<iostream>
using namespace std;
int main(){
int cp;
cout<< "enter cost price of item :";
cin>>cp;
int sp;
cout<<"enter selling price of item :";
cin>>sp;

if (sp>cp)
{
cout<< "seller has made profit of "<< sp-cp ;
}
else if (cp>sp)
{
cout<<"seller has made loss of "<< cp- sp;
}
else
{
    cout<<"seller has no profit no loss";
}





}