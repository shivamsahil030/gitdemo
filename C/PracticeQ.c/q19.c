/*print all number from 1 to 20 except for 14*/
// sol.
#include<stdio.h>
int main(){

    for (int i = 1; i <=20; i++)
    {
    if (i == 6)
    {
        continue;
    }
    printf("%d\n", i);
    }
     printf("THANK YOU");

     return 0;
}