#include<stdio.h>
int main(void)
{int num=10 ,val;
val=num++;
printf("val: %d num:%d",val,num);
val=++num;
printf("val: %d num:%d",val,num);
return 0;

}