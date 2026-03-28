/*print reverse of the table for a number n*/
//sol.
#include<stdio.h>
int main(){
     int n;
     printf("enter table:");
     scanf("%d", &n);

     for (int i = 10; i>=1; i--)
     {
    printf("%d\n", n*i);
     }
     return 0;
}