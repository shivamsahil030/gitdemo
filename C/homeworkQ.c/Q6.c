/*write a program to print the smallest number of two*/
// sol.
#include<stdio.h>
#include<math.h>
int main(){

int n1,n2;
printf("enter two number:");
scanf("%d %d", &n1,&n2);
 if ( n1< n2)
 {
printf("%d is the smallest number\n",n1);

}else
{
printf("%d is the smallest number\n",n2);
}
return 0;
}