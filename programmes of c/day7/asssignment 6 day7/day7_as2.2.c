#include<stdio.h>
int main (void)
{
    int i=0,no,res, fir=0,sec=1;
    printf("enter the number of terms in fibbonacci:");
    scanf("%d",&no);
    printf("the fibbonacci series:");
    while(i<no)
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
        i++;
     }

}