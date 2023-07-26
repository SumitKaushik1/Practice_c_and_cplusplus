#include<stdio.h>
int main(void)
{
    int num1=300,num2=20,num3=5000;
    printf("%d%d%d",num1,num2,num3);
    printf("\n%d  %d  %d",num1,num2,num3);
    printf("\n%5d%5d%5d",num1,num2,num3);
    printf("\n%5d%5d%5d",num3,num1,num2);
    printf("\n%-5d%-5d%-5d",num1,num2,num3);
    printf("\n%-5d%-5d%-5d",num3,num1,num2);
    return 0;
    
    }