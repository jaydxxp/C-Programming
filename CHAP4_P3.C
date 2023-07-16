#include<stdio.h>
int main()
{
    //keep taking input from user until the user writes an odd number.
    for(int i=1;1; i++)
    {   int n;
         printf("enter number:");
        scanf("%d",&n);
        if(n%2==1)
          {
            break;
          }
       
    }
    printf("end!");
    return 0;
}