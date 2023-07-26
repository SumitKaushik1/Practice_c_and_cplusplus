#include<stdio.h>
int main (void)
{
    int i;
    int arr[4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    for(i=0;i<4;i++)
    {
        printf(" \narr[%d]:%d   &arr[%d]:%u ",i,arr[i],i,&arr[i]);

    }
    printf(" size of array:  %d",sizeof(arr));
return 0;
}