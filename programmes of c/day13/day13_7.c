#include<stdio.h>
int main(void)
{
    
    #if defined PI
     printf(" PI is defined");
     #else
     printf("PI is not defined");
     #endif
     return 0;
}