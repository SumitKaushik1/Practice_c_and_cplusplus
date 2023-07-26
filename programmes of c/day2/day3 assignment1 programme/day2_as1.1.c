#include<stdio.h>
int main (void)
{    char ch1,ch2;
    ch1=98,ch2=93;
    char ch3,ch4,ch5;
    ch3=ch1+ch2;
    ch4=ch1-ch2;
    ch5=ch1*ch2;
    int a=50;
    int b= 60;
    int c,g,h;
    long d=106;
    long e =102;
    long f,i,j;
    c=a+b;
    g=a-b;
    h=a*b;
    f=d+e;
    i=d-e;
    j=d*e;
    printf("%2d \n%2d\n %2d\n %2ld\n %2ld \n%2ld\n%d\n%d\n%d",c,g,h,f,i,j,ch3,ch4,ch5);
    return 0;

}// by default all are signed thats why negative sign come in