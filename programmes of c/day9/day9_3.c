#include<stdio.h>
void test1();
int main (void)
{     
    
    
    test1();
    printf("\ncalling test funtion once again");
   test1();
   test1();


    return 0;
}

void test1()
{    int num=30;
      static int s_var=20;
    printf("\nnum :%d:   s_var %d ",num,s_var);
      num+=10;
      s_var+=5;
printf("\nnum :%d:   s_var:%d",num,s_var);
}
