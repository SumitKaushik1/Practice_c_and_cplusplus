#include <stdio.h>
int main( void )
{
int num1 = 1, num2 , num3 = 5;
num2=--num1;
int ans1 = num1-- || num2++ || num3++;
int ans2 = ++num1 && num2++ && num3++;
printf("num2=%d num3=%d ", num2,num3);
printf("(ans1-ans2)=%d ", ans1-ans2);
return 0;
}