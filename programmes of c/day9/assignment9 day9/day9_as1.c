#include<stdio.h>
int fib(int n)

{
    if(n==1)
    return 0;
     else
    { if(n==2)
     return 1;
     else
     return fib(n-1)+ fib(n-2);

     }
}

int main(void)
{
    int num,res;
    printf("enter the nth number ");
    scanf("%d",&num);
    res=fib(num);
    printf("nth term of fibbonacci series::%d",res);
  return 0;
}