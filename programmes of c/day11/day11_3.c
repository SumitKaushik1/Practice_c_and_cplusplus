#include<stdio.h>
int main(void)
{
    int i,arr[6]={ 1,3,4};
    printf("size fo array:%d",sizeof(arr));
    for(i=0;i<6;i++)
    printf("\narr[%d]:%d",i,arr[i]);
    return 0;

}