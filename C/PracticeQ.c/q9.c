/*write a program to check if a student passed or fail.
    marks> 30 is pass
    marks<=30 is fail*/
// sol.

#include<stdio.h>
#include<math.h>
int main(){

    int marks;
    printf("enter marks(0-100)");
    scanf("%dd", &marks);

if (marks>=0 && marks<=30)
{
printf("fail\n");
}
else if (marks>=30 && marks<=100)
{
printf("pass\n");
}
else
{
printf("wrong marks");
}

return 0;

}