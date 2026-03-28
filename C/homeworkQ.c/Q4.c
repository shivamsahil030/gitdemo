/* write a program to print the average of 3 numbers*/
//sol.
#include<stdio.h>
#include<math.h>
int main(){

    float number1,number2,number3;
    printf("input three numbers:");
    scanf("%f %f %f", &number1,&number2,&number3);

printf("the three average numbers=%2f",(number1+number2+number3)/3);

return 0;
}