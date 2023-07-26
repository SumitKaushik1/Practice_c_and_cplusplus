#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else 
    if(b==0)
    return a;
    else 
     if(a>b) 
     return gcd(a%b,b);
     else
     if(a<b)
     return gcd(a,b%a);
     
     
         
}


int main (void)
{
    int n1,n2,res;
    printf("enter the number:");
    scanf("%d",&n1);
    printf("enter the number:");
    scanf("%d",&n2);
    res=gcd(n1,n2);
    printf("the HCF of %d and %d:%d",n1,n2,res);
    return 0;

    

}