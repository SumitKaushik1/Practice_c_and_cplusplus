#include<stdio.h>

void add_pro(int*n1,int*n2)
{  int res=NULL;
    int choice;
    printf("enter the choice:1.addition 2.product:");
    scanf("%d",&choice);
    switch(choice)

    {
        case 1:
        res=*n1+*n2;
        printf("\nthe addition is %d ",res);
        break;
        
        case 2:
        res=*n1**n2;
        printf("\nthe product is %d",res);
        break;
        default:
        printf("\nyou entered wrong choice");
        break;

    }
}
int main(void)
{
    int num1,num2;
    printf("enter first number :");
    scanf("%d",&num1);
     printf("enter second number :");
    scanf("%d",&num2);
    int*ptr1=&num1;
    int *ptr2=&num2;
    add_pro(ptr1,ptr2);
    return 0;
}