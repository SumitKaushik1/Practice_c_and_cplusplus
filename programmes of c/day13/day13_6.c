#include<stdio.h>
#define PI 3.14
int main(void)
{ 
    #if defined PI
     printf(" PI is defined");
     #else
     printf("PI is not defined");
     #endif
     return 0;
    
}