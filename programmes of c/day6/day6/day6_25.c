#include<stdio.h>
int main (void)
{
    int i;
    for (i=1;i<=10;i++)
    {

        if(i==5)
        continue;
       printf("%3d",i); 
    }
    return 0;
}