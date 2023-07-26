#include<stdio.h>
static int s_var=20;
void test();
int main (void)
{  printf("inside main:%d: value  %d: address",s_var,&s_var);
    test();
    return 0;
}

void test()
{
    printf("\ninside function :%d: value  %d: address",s_var,&s_var);
}