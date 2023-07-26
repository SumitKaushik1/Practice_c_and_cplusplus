#include <stdio.h>
int main(void)
{   int a=4 ,b=3,c;
printf("A:%d B:%d ",a,b);
c=--a&&b++;
printf("\n A:%d B:%d C:%d ",a,b,c);


return 0;
}