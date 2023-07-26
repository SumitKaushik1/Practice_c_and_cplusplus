#include<stdio.h>
#define swap(type,a,b){ type temp; temp=a;a=b;b=temp;  }
int main (void)
{  int n1=20,n2=10;
 float  f1=3.5,f2=6.5;
 printf("\n before  swap:%d  %d",n1,n2);
  swap(int,n1,n2);
    printf("\n  after swap:%d %d",n1,n2);
      printf("\n before  swap:%f  %f",f1,f2);
  swap( float,f1,f2);
    printf("\n  after swap:%f %f",f1,f2);
     
    return 0;
}