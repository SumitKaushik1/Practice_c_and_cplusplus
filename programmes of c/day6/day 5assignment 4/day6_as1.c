#include<stdio.h>
int main(void)
  {   int num, a,b,c,d,e;
  printf("\nenter 5 digit  number:");
  scanf("%d",&num);
  e=num%10;
  num/=10;
  d=num%10;
  num/=10;
  c=num%10;
  num/=10;
  b=num%10;
  num/=10;
a=num;
if(a==e)
if(b==d)
printf("it is a pallindrome");
else
printf("it is not  a pallindrome");
else
printf("it is not a pallindrome");
return 0;
  }