//given the length and breadth of a rectangle write a program to find wether the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std ;
int main (){

int length ;
cout<< "Enter the length of the rectangle : " ;
cin>> length;
int breadth ;
cout<<"Enter the breadth of the rectangle : " ;
cin>> breadth;
 int area = length * breadth ;
 cout<< "area of the rectangle is : "<< area  ;
 cout<< endl;
 int perimeter = 2 * (length + breadth) ;
 cout<< "perimeter of the rectangle is : "<< perimeter ;
cout<< endl ;
 if (area>perimeter)
 {
    cout<< "area of the rectangle is greater than its perimeter " ;
 }
 else {
    cout<< "area of the rectangle is not greater than its perimeter " ;
 }



}