/*print 1`8% GST of value(200)*/
//sol.
#include<stdio.h>
void calculate_price(float value);
int main(){
    float value=200;
    calculate_price(value);
    printf("value is:%f\n", value);
    return 0;
}
void calculate_price(float value){
value= value+(0.18*value);
printf("final price is:%f\n", value);
}