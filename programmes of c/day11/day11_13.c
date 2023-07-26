#include<stdio.h>
int main(void)
{
    const float PI=3.14;
    float *fptr= &PI;
    printf(" %f %f",PI,*fptr);//use %f because float
    printf(" \n%u %u",&PI,fptr);
   *fptr=6.5;
   printf(" \n%f %f",PI,*fptr);
   return 0;
}