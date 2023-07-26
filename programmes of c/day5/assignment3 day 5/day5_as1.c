#include<stdio.h>
int main(void)
  {   int n1,rem1,rem2,rem3;
  printf("\nenter 3 digit  number:");
  scanf("%d",&n1);
  rem1=n1%10;
  n1=n1/10;
  rem2=n1%10;
  n1=n1/10;
  rem3=n1; 
  printf("\nthe sum of all digits :%d",rem1+rem2+rem3);
  return 0;
  }