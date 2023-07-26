#include<stdio.h>
int main(void)
  {   int num, a,b,c,d,e;
  printf("\nenter 4 digit  number:");
  scanf("%d",&num);
  d=num%10;
  num=num/10;
  c=num%10;
  num=num/10;
  b=num%10;
  num=num/10;
  a=num; 
  printf("\n%-5d%-5d%-5d%-5d",a,b,c,d);
  e=a*1000+b*100+c*10+d;
  printf("\n%-5d  =  %-5d  +   %-5d  +  %-5d  +  %-5d",e,a*1000,b*100,c*10,d);
   printf("\n%d%d%d%d",d,c,b,a);
   return 0;
  }