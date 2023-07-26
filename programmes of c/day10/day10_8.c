#include<stdio.h>
void swap(int n1,int n2);
int main(void)
{
    int num1,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second  number:");
    scanf("%d",&num2);
    printf("before swap:%d   %d",num1,num2);
    swap(num1,num2);
    printf("\nafter  swap:%d   %d",num1,num2);
    return 0;
       

}

void swap(int n1,int n2)
{
    int temp;
    temp= n1;
     n1= n2;
     n2=temp;
}