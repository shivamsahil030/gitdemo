/*if a number is greaterthan 9 and lessthan 100.
(2digit number)*/
// sol.
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("enter number");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);

    return 0;
    
}