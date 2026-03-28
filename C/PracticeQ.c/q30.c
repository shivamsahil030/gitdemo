/*sum of first n natural number*/
//sol.
#include<stdio.h>
int sum(int n);
int main(){
    printf("sum is:%d", sum(52));
    return 0;
}
                                   //Recursive function.
int sum (int n){
    if (n==1){
        return 1;
    }    
                         // sum of 1 to n.

return n+sum(n-1);
}
