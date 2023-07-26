#include<stdio.h>
int main(void)
{
    int num=10;
    int *ptr=&num;
    printf("\n num:%d  *ptr:%d",num,*ptr);
    printf("\n address of  num:%u    ptr:%u",&num,ptr);
    (*ptr)++;
    printf("\n num:%d  *ptr:%d",num,*ptr); //11 11
    *ptr+=2;//*pte+2=*ptr
 printf("\n num:%d  *ptr:%d",num,*ptr); //13  13
 ptr+=2;
  printf("\n num:%d  *ptr:%d",num,*ptr);// 13  garbage value
    return 0;
}