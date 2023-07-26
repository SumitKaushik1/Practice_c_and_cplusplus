#include<stdio.h>
int main(void)
  {   int num;
  printf("\nenter  the year :");
  scanf("%d",&num);
  if(num%400==0||(num%100)!=0&&num%4==0)
  printf("\nthis year is a leap year and has 366 days");
   else
  printf(" this is not a leap year and it has  365 days ");
  return 0;
  }