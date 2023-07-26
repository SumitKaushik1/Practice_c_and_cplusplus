#include<stdio.h>
int fact_rect(int num);
int main(void)
{
    int num,res;
    printf("\nenter number :");
    scanf("%d",&num);     
     res=fact_rect(num);
   printf("the result:%d",res);
   return 0;
}

int fact_rect(int num)
{
    if(num==1)
    return 1;
    else
    return num*fact_rect(num-1);
}