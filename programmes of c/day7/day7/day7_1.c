#include<stdio.h>
int main (void)
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==5)
    {   goto test;
        printf("*******");
        test :printf("after skipped above statement");
}
return 0;

}