#include <stdio.h>
int main(void)
{   int a,b;
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the number :");
    scanf("%d",&b);
    printf("\na<b:%d",a<b);//%d because  0&! are integer only
    printf("\na<=b:%d",a<=b);
    printf("\na>b:%d",a>b);
    printf("\na>=b:%d",a>=b);
    printf("\na==b:%d",a==b);
    printf("\na!=b:%d",a!=b);  
    return 0;
}