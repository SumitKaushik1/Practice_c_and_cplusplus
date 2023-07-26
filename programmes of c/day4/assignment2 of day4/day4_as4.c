#include<stdio.h>
int main(void)
  {   float avg;
  float a,b,c;
    printf("\nenter first   number:");
  scanf("%f",&a);
    printf("\nenter second   number:");
  scanf("%f",&b);
    printf("\nenter third   number:");
  scanf("%f",&c);
  avg=(a+b+c)/3 ;
    printf("\nthe average is: %f",avg);
    return 0;
  }