#include <stdio.h>
int main (void)
{
    int n1,n2,val;
    printf("enter the value of first number :");
    scanf("%d",&n1);
printf("enter the value of second number :");
    scanf("%d",&n2);
    val=(n1>n2)?n1:n2;
    printf("maximum of two number :%d ",val);
    }