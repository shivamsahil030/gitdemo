/*write a program to calculate perimeter of rectangle.
take side, a & b, from the user.*/
//sol.
#include<stdio.h>
#include<math.h>
int main(){
                                // let  consider a is l, and b is b;
    int l,b,perimenter;
    printf("enter a:");
    scanf("%d", &l);

    printf("enter b:");
    scanf("%d", &b);

    perimenter= 2*(l+b);

printf(" perimeter of rectangle:%d", perimenter);

return 0;

}