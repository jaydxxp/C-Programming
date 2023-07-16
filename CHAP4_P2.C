#include<stdio.h>
int main()
{    //write the table of n in which n is enter by user.
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n)
    {
        printf("%d \n",i);
    }

    return 0;
}