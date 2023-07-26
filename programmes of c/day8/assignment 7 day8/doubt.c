#include <stdio.h>

int fun1(int x, int y)
{
if(x < y)
return (x + y), (x - y);
else
return (x / y), (x * y );
return 0;
}
int fun2(int x, int y)
{
exit(0);
if(x > y)
return (x + y), (x - y);
else
return (x / y), (x * y );
}
int main()
{
int x = 2, y = 3;
printf(" value=%d", fun1(3,2));
printf("\tvalue=%d", fun2(2,3));
return 0;
}