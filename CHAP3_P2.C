#include<stdio.h>
int main()
{
  //grading system
  int marks;
  printf("enter marks: ");
  scanf("%d",&marks);

  if(marks>=90 && marks<=100)
  {
    printf("A+");
  }
  else if(marks>=70 && marks<=90)
  {
    printf("A");
  }
  else if(marks>=30 && marks<=70)
  {
    printf("B");
  }
  else if(marks<30)
  {
    printf("C");
  }
    return 0;
}