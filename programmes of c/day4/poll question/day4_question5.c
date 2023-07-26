#include<stdio.h>
int main(void)
{
    
    float fval=654.123456f;
     int i,j;
     j=printf("\n%8.3f",fval);
    i=printf("\n%3.3f",fval);
    printf("\n%d\n%d",i,j);
    return 0;

}