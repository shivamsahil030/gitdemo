/*write a program to check if the given number is a natural number*/
// sol.
#include<stdio.h>
int main(){

    int n;
    printf("enter number:");
    scanf("%d", &n);

    if (n <= 0)
    {
    printf("%d is not natural number\n", n);
    }
    else
    {
    printf("%d is  natural number\n", n);
    }
    
    return 0;
}