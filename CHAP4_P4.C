#include<stdio.h>
int main()
{
    for(int i=1; 1; i++)
    {   int n;
        printf("enter number:");
        scanf("%d",&n);
        if(n%7==0)
        {
            break;
        }
    }
    printf("end!");

    return 0;
}