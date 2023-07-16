#include<stdio.h>
int main()
{
    //Print the sum of first n natural numbers.
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++)
    {  
        sum=sum+i;
    }
    printf("sum is %d",sum);

    //also write in reverse format.
    for(int i=1; i>=n; i--)
    {
    printf("%d",i);
    }
    return 0;
}
