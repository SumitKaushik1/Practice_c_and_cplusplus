#include <stdio.h>
int main()
{
int var = 0,i;
if (var == 0)
{
goto L1;
if( (var != 0))
{
printf("hello\n");
L1: i = printf("%3d", var);
}
printf("\n%d", i);
}
return 0;
}