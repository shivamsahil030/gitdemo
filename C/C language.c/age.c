#include<stdio.h>
// write a program AGE Classficition
int main(){

    int age;
    printf("enter age");
    scanf("%d", &age);

    if (age> 18)

    {
     printf("Aduld\n");
    }
    else if (age> 15 && age<18)
    {
     printf("Teenager");
    
    }
    else if (age>10 && age<15)
    {
    printf("Child");
    }
    else
    {
        printf(" not human");
    }
    
    return 0;
}