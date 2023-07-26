#include<stdio.h>
int main(void)
{
    int num=10;
    int *ptr=&num;
    char ch='A';
    char *cptr=&ch;
    printf("num:%d   *ptr:%d",num,*ptr);
    printf("\nch:%c   *cptr:%c",ch,*cptr);
    return 0;
}
