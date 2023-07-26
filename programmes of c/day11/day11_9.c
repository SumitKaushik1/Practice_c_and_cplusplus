#include<stdio.h>
int main(void)
{
    int a[4],i,b[4];
    printf(" \nenter the array elements:");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    printf("\narray elements:\n");
    for(i=0;i<4;i++)
    printf(" \nelement  %dth:%d",i,a[i]);
    printf(" \nenter the array elements:");
    for(i=0;i<4;i++)
    scanf("%d",&b[i]);
    printf("\narray elements:\n");
    for(i=0;i<4;i++)
    printf(" \nelement  %dth:%d",i,b[i]);


    return 0;

    
}