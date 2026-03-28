/*write a program to find if a character enter by user is upper case or not */
// sol.
#include<stdio.h>
int main(){
    char character;
    printf("enter character");
    scanf("%c", &character);

    if (character>='A' && character<='Z')
    {
    printf("UPPER CASE");
    }
    else if (character>='a' && character<='z')
    {
    printf("LOWER CASE");
    }
    else
    {
    printf("not english language");
    }
    
    return 0;
}