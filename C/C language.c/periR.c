#include<stdio.h>
//  Q.write a program to calculate the perimeter of rectangle.
//Sol. let A is length and B is breath 
int main(){

    int a,b,p;
    printf("Enter a");
    scanf("%d", &a);

    printf(" enter b");
    scanf("%d", &b);
    

p=2*(a+b);
printf("perimeter of rectangle :%d", p);

return 0;

}