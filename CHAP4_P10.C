//Sum of all even numbers 1 to n.
#include<stdio.h>
int main()
{   int n;
    printf("enter number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            continue;
        }
        
        sum=sum+i;
    }

    printf("sum is %d",sum);


    return 0;
}