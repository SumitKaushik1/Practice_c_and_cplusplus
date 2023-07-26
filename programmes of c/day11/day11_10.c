#include<stdio.h>
void accept_arr(int arr[4])
{
  int i;
    printf(" \nenter the array elements:");
    for(i=0;i<4;i++)
    scanf("%d",&arr[i]);
    printf("\narray elements:\n");
    for(i=0;i<4;i++)
    printf(" \nelement  %dth:%d",i,arr[i]);
    

    
}   

int main(void)

{
    int a[4],b[4];
    accept_arr(a);
    accept_arr(b);

    return 0;
}