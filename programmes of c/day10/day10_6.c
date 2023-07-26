#include<stdio.h>
int main(void)
{
    int num=10;
    int *ptr=&num;
    printf("\n num:%d  *ptr:%d",num,*ptr);
    printf("\n address of  num:%u    ptr:%u",&num,ptr);
    ++*ptr;//11  11
    printf("\n num:%d  *ptr:%d",num,*ptr); //11  11
    *++ptr;//inside ptr variable is num address ,that address increment by 1(4) ie *(++ptr) 
    printf("\n num:%d  *ptr:%d",num,*ptr);//11  garbage value
    return 0;
}