/*keep taking number as input from user until user enters a number which is multiple of 7*/
// sol.
#include<stdio.h>
int main(){
    int n;
    do
    {
    printf("enter number:");
    scanf("%d", &n);
    printf("%d\n", n);

    if (n % 7== 0)
    {
        break;
    }
    
    } while (1);
    printf("THANK YOU");

    return 0;
}