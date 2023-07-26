#include<stdio.h>
#include<math.h>
int main (void)
{int a,b,c,P;
float s,A;
printf("enter the length of the sides of triangle");
scanf("%d%d%d",&a,&b,&c);
P=a+b+c;
printf("\nperimeter:%d",P);
s=(a+b+c)/2;
printf("\n%f",s);
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\narea:%f",A);
return 0;
}