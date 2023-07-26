#include<stdio.h>
int main(void)
{
    int num=20;
    int *ptr=&num;
    int **pptr=&ptr;
    printf("\n num:%d  *ptr:%d",num,*ptr);
    printf("\n address of  num:%u    ptr:%u",&num,ptr);
    printf("\n address of    ptr:%u",&ptr);
    printf("\n **pptr:%d   pptr:%u",**pptr,pptr);
    printf("\n address of    pptr:%u",&pptr);
    printf("\n size of num variable:%d    size of ptr variable:%d  size of pptr variable:%d",sizeof(num),sizeof(ptr),sizeof(pptr));
 return 0;

}