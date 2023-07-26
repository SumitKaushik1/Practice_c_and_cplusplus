#include<stdio.h>
int main (void)
{
    int i,no,res, fir=0,sec=1;
    printf("enter the number of terms in fibbonacci:");
    scanf("%d",&no);
    printf("the fibbonacci series:");
    for(i=0;i<no;i++)
     {
       if(i<=1)
       {
           res=i;
       }
       else
       {
           res=fir+sec;
           fir=sec;
           sec=res;

       }
       printf("%5d",res);

     }

}