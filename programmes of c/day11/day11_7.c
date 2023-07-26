#include<stdio.h>
int main(void)
{
    int arr[5]={11,22,33,44,55};
    printf("\n%d",*arr);//11
    printf("\n%d",*(arr+1));//22
    printf("\n%d",*arr+1);//12
    printf("\n%d",arr[3]+10);//54
    printf("\n%d",*(arr+3)+10);//54
    printf("\n%d",*arr+5+5);//21
    printf("\n%d",*(arr+3)+5+4);//53
    printf("\n%d",*(arr+1)+*(arr+3));//66
    printf("\n%d",arr[1]+arr[3]);//66
    return 0;

}