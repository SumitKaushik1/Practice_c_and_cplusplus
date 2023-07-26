#include<stdio.h>
int main(void)
{
    int i;
    printf("\nodd numbers are");
    for(i=1;i<=10;i+=2)
    {
        printf("%-5d",i);
        
    }

     printf("\n even numbers are");
    for(i=0;i<=10;i+=2)
    {
        printf("%-5d",i);
        
    }
    return 0;
    }