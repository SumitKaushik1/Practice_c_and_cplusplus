#include <stdio.h>
int main (void)
{
    int a=2,b,res;
    printf("\nA:%d ",a);
    b=a++ + a-- + ++a + --a;
printf("\nA:%d ",a);
    res= a++ + ++a - ++a- --a;
    printf(" \nA:%d  B:%d  res:%d",a,b,res);
    return 0;
}