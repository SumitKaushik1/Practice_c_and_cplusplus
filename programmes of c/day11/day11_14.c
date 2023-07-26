#include<stdio.h>//error program
int main(void)
{      
    const float PI=3.14;
    const float *fptr= &PI;
    float**fpptr=&fptr;
    printf(" %f %f",PI,**fpptr);//use %f because float
    printf(" \n%u %u",&PI,fpptr);
   **fpptr=6.5;
   printf(" \n%f %f",PI,**fpptr);
   return 0;
}
/*#include<stdio.h>//error program
int main(void)
{
    const float PI=3.14;
    const float *fptr= &PI;
    printf(" %f %f",PI,*fptr);//use %f because float
    printf(" \n%u %u",&PI,fptr);
   *fptr=6.5;
   printf(" \n%f %f",PI,*fptr);
   return 0;
}
*/