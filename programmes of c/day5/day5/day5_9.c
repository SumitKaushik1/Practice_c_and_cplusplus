#include<stdio.h>
int main(void)
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0)
    printf("it is a negative number ");
    else
    if(num>0)
    printf("it is a positive number ");
    else
    printf("it is a zero ");
    return 0;
    
}