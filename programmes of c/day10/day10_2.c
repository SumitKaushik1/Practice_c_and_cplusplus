#include<stdio.h>
int main(void)
{
    int num=20;
    int *ptr=&num;
    int **pptr=&ptr;
    printf("\n num:%d *ptr:%d **pptr:%d",num,*ptr,**pptr);
  num=30;
    printf("\n num:%d *ptr:%d **pptr:%d",num,*ptr,**pptr);
    *ptr=40;
      printf("\n num:%d *ptr:%d **pptr:%d",num,*ptr,**pptr);
      **pptr=50;
        printf("\n num:%d *ptr:%d **pptr:%d",num,*ptr,**pptr);
        return 0;

}