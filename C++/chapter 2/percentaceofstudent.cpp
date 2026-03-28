// take input percentage of a student an print the grade according to marks ;
// a) 81-100 very good. b) 61-80 good. c) 41-70 avg. d) <=40 fail.
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<< "enter a marks : " ;
    cin>>marks;
    if (marks>=101)
    {
        cout<<" wrong marks enter";
    }
    
     else if (marks>=81 && marks<=100)
    {
        cout<< "very good";
    }
    else if (marks>=61 && marks<=80)
    {
        cout<< "good";
    }
    else if (marks>=41 && marks<=70)
    {
        cout<< "avrage";
    }
    else
    {
        cout<< "fail";
    }
    
   
    
}