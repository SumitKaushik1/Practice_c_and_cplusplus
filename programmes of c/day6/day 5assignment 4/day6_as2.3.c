#include<stdio.h>
int main(void)
  {   int num;
  printf("\nenter  the year :");
  scanf("%d",&num);

  (num%400==0)?printf("this year is a leap year and has 366 days"):(num%100!=0&&num%4==0)?
  printf("this year is a leap year and has 366 days"):printf("nthis year is not a leap year and has 365 days");
  return 0;
  }