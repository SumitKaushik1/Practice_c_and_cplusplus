#include<stdio.h>
int main(void)
{
    int arr[4]={50,20,10,30};
    printf("\narr:%u  &arr:%u  &arr[0]:%u",arr,&arr,&arr[0]);
    printf("\narr+1:%u  arr+2:%u  arr+3[0]:%u",arr+1,arr+2,arr+3);
    printf("\n&arr+1:%u  &arr+2:%u  &arr+3[0]:%u",&arr+1,&arr+2,&arr+3);

return 0;
}