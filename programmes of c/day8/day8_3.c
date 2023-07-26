#include<stdio.h>
void sum_of_numbers(int v1,int v2);
void sub(int v1,int v2);
int main(void)
{   int num1,num2,num3,num4;
    printf(" enter the first number: ");
    scanf("%d",&num1);
    printf(" enter the second number: ");
    scanf("%d",&num2);
    sum_of_numbers(num1,num2);
    sub(num1,num2);
    printf(" \nenter the third number: ");
    scanf("%d",&num3);
    printf(" enter the fourth number: ");
    scanf("%d",&num4);
    sum_of_numbers(num3,num4);
    sub(num3,num4);    
}

void sum_of_numbers(int v1,int v2)
{
    int res;
    res=v1+v2;
    printf("the addition :%d",res);
}


void sub(int v1,int v2)
{
    int res;
    res=v1-v2;
    printf("\nsubtraction:%d",res);
}