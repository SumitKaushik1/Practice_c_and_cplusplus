#include <stdio.h>
int main(void)
{   int a=-10 ,b=3,c=0,d;
printf("A:%d B:%d C:%d",a,b,c);
d=a++||(++b&&c++);
printf("\n A:%d B:%d C:%d D:%d",a,b,c,d);
printf("\n logical NOT:%d",!d);

return 0;
}