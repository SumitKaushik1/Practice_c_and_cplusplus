#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    printf("\n%s",__FILE__);
    printf("\n%s",__TIME__);
    printf("\n%s",__DATE__);
    printf("\n%d",__LINE__);
    return EXIT_SUCCESS;
    }