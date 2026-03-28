/*write a function that prints namaste if user is Indian & Bonjour if the user is French*/
//sol.
#include<stdio.h>
void Namste();
void Bonjour();
int main(){
printf("enter I for Indian &  F for French:");
;

char ch;
scanf("%c", &ch);
if (ch=='I')
{
printf("Namste");
}
else
{
printf("Bonjour");
}
return 0;
}

void printnamste(){
    printf("Namste");
}
void printbonjour(){
    printf("Bonjour");
}