#include<stdio.h>
int main (void)
{    char ch1,ch2;
    ch1=98,ch2=93;
     char ch3,ch4,ch5;
    ch3=ch1+ch2,ch4=ch1-ch2,ch5=ch1*ch2;
    int a=50 ,b= 60,c,g,h;
    long  int d=106,e =102, f,i,j;
     c=a+b,g=a-b,h=a*b,f=d+e,i=d-e,j=d*e;
    printf("%-6d%-6d %-6d %-6ld", c,g,h,f);
    printf("%-6ld%-6ld%-6d%-6d%-6d",i,j,ch3,ch4,ch5);
    unsigned   char ch6,ch7;
    ch6=98,ch7=93;
     unsigned char ch8,ch9,ch10;
    ch8=ch6+ch7,ch9=ch6-ch7,ch10=ch6*ch7;
    unsigned int k=50 ,l= 60,o,p,q;
    unsigned long int m=106,n =102, r,s,t;
     o=k+l,p=k-l,q=k*l,r=m+n,s=m-n,t=m*n;
    printf("%-6u p:%-6u %-6u %-6u", o,p,q,r);
    printf("%-6u%-6u%-6u ch9:%-6u%-6u",s,t,ch8,ch9,ch10);
    return 0;
     }// by default all are signed thats why negative sign come in