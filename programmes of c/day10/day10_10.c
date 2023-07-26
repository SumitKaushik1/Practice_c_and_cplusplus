#include<stdio.h>
int main(void)
{
    int num=65;
    char ch='A';
    void*vptr;
    vptr=&num;
    printf("\n&num:%u   vptr:%u",&num,vptr);
    printf("\n&num:%d   vptr:%d",num,*(int*)vptr);
    vptr=&ch;
    printf("\n&num:%u   vptr:%u",&ch,vptr);
    printf("\n&num:%c   vptr:%c",ch,*(char*)vptr);
    return 0;

}                                                                                                                                                                                                                                                                                                                                                  