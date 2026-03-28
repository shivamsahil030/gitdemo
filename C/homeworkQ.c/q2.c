/* take a number (n) from user & output its cube (n*n*n)*/
// sol.
#include<stdio.h>
#include<math.h>
int main(){

    int n,volume;
    printf("enter number:");
    scanf("%d", &n);
 
 volume=n*n*n;

 printf("volume of cube is:%d", volume);

 return 0;

}