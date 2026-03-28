//given a point (x,y), write a program to find out if it lies in the 1st quadrant , 2nd quadrant , 3rd quadrant , 4 quadrant , on the x-axis , y-axis or at the orgin viz(0,0).
#include<iostream>
using namespace std;
int main (){
 int x;
 cout<< "enter x-axis : ";
 cin>> x;
 int y;
 cout<< "enter y-axis : ";
cin>> y;
if (x== 0 and y==0 )
{
    cout<< "the point is at the origin"<< endl;
}
else if (x>0 && y>0)
{
    cout<<"the point lies on 1st quqdrant"<<endl;
}
else if (x>0 && y<0)
{
    cout<< "the point lies on 2nd quadrant"<< endl;
}
else if (x<0 && y<0)
{
     cout<< "the point lies on 3nd quadrant"<< endl;
}
else if (x<0 && y>0)
{
    cout<< "the point lies on 2nd quadrant"<< endl;
}


}