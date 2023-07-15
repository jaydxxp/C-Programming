#include<stdio.h>
int main()
{   

    int marks;
    printf("enter marks:");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("A+");
    }
    else if(marks>=70 && marks<=90)
    {
        printf("A");
    }
    else if(marks>=35)
    {
      printf("pass");
    }
    else if(marks<=35)
     {
        printf("fail");
     }
    return 0;
}