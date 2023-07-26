#include<stdio.h>
static int s_var=20;
void test1();
void test1();
int main (void)
{  printf("inside main:%d: value  %d: address",s_var,&s_var);
    test1();
    test2();
    s_var=50;
    test1();
    printf("\ninside main:%d: value  %d: address",s_var,&s_var);

    return 0;
}

void test1()
{
    printf("\ninside test1 :%d: value  %d: address",s_var,&s_var);
}

void test2()
{
    printf("\ninside test2 :%d: value  %d: address",s_var,&s_var);
}