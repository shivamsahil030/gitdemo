// predict the output
 #include<iostream>
 using namespace std;
 int  main(){
     int x=10 , y=20;
     if (x==y);
     {
         cout<<x<<""<<y; // output is {10 20}
     }

    }

// predict the output
#include <iostream>
using namespace std;
int main (){
    int x=3 , y=5;
    if (x==3)
    {
        cout<<x<<endl;
    }                       // output is {3}
    else{
        cout<<y<<endl;
    }
}

// predict the output
#include <iostream>
using namespace std;
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    cout << x << "" << endl
         << y << "" << endl
         << z << endl;          // output is {10 10 0}
}