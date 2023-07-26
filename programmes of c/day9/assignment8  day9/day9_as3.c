#include<stdio.h>

int power(int n1,int n2)
{
    if(n2==1)
    return n1;
    else 
    return (n1*power(n1,n2-1));

}
int main(void)
{
    int a,b,res;
    printf("enter the base::");
    scanf("%d",&a);
    printf("enter the power:");
    scanf("%d",&b);
    res=power(a,b);
    printf("the result:%d",res);
    return 0;


}