/* write a program to check if given character is digit or not */
//sol.
#include<stdio.h>
int main(){

    char c;
    printf("enter character:");
    scanf("%c", &c);

if (c>='0' && c<='9')
{
printf("%c is a digit\n", c);
}
else
{
printf("%c is not a digit\n", c);
}

return 0;

}