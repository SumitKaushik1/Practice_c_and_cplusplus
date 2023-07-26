#include<stdio.h>
int main(void)
{
    int a[4],i;
    printf(" enter the array elements:");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    printf("array elements:\n");
    for(i=0;i<4;i++)
    printf(" element  %dth:%d",i,a[i]);
    return 0;

    
}