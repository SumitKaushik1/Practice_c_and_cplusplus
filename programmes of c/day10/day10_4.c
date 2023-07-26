#include<stdio.h>
int main(void)
{
    int num=14;
    char *ptr=&num;

    printf("num:%d   *ptr:%d",num,*ptr);

    return 0;
}
