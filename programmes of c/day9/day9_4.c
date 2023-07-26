#include<stdio.h>
void demo();
int main (void)
{     
    
    
    demo();
    demo();
    


    return 0;
}

void demo()
{    int num=30;
      static int s_var;
      s_var=20;
    printf("\nnum :%d:   s_var %d ",num,s_var);
      num+=10;
      s_var+=5;
printf("\nnum :%d:   s_var:%d",num,s_var);
}
