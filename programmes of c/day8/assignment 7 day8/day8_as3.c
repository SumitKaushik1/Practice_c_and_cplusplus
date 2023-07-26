#include<stdio.h>
int base_power(int n1,int n2);
int main(void)
{
    int num1,num2,res;
    printf("enter base number:");
    scanf("%d",&num1);
    printf("enter index number:");
    scanf("%d",&num2);
    res =base_power(num1,num2);
    printf("power to base index:%d",res);
    return 0;
}
int base_power(int n1,int n2)
{
    int i=1;
    int res1=1;
    while(i<=n2)
    {
        res1=res1*n1;
        i++;
    }
    return res1;
}

