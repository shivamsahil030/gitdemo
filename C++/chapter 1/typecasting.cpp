//take a integer 'x' as input and print half of the number. and also chnge int to float 
#include <iostream>
using namespace std;
int main (){
    int x ;
    cout<<"Enter a number :"
    cin>> x;
    float y = (float) x ; // int to float  (typecasting).
    cout<< y/2 ;

}
 
//take a integer 'x' as input and print half of the number. and also chnge  float  to int .
#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "Enter a number: ";
    cin >> x;

    int y = (int)x;        // Convert float to int
    cout << y / 2 << endl; 

    return 0;
}
