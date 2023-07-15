#include<stdio.h>
int main()
{
    char al;
    printf("enter character:");
    scanf("%c",&al);

    if(al>=65 && al<=90)
    {
        printf("%c is in upper case",al);
    }
    else if(al>=97 && al<=122)
    {
        printf("%c is in lower case",al);
    }
    else
    {
        printf("not valid!");
    }
    return 0;
}