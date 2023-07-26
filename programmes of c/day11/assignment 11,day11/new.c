#include<stdio.h>
int main()
{
   short   int a[] = { 11, 22, 33, 44 };
    short  int (*ptr)[4] = &a;
    printf("%d %d", sizeof(ptr),  sizeof(a));
    return 0;
}
