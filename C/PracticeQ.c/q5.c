// write a program to check if a number is divisible by 2 or not.
//sol.
#include<stdio.h>
#include<math.h>             //Divisible by 2:- 1
 int main(){                 // Not divisible by 2:-0
    int x;
    printf("enter number:");
    scanf("%d", &x);
    printf("%d", x%2==0);
    return 0;

 }