#include<stdio.h>
int main(void)
{
    int arr[5]={11,22,33,44,55};
    printf("%u",arr);
    printf("\n%d",*arr);
    printf("\n%d  %d   %d",*(arr+1),*(arr+2),*(arr+3));
    printf("\n%d  %d   %d",*(1+arr),*(2+arr),*(3+arr));
    return 0;
}