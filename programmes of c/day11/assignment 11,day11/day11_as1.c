#include<stdio.h>
int main(void)
{
    float a[6];
    int i,res=NULL;
    printf("\nenter the marks of subject out of 100");
    printf("\n1.physics 2.sst  3.english 4.maths   5.chemistry");
    for(i=1;i<=5;i++)
    {
        printf(" \n%d:",i);
        scanf("%f",&a[i]);
    }
    for(i=1;i<=5;i++)
    res+=a[i];
    printf("\ntotal marks:%.2f",(float)res);
    printf("\naverage mark:%.2f",(float)res/5);
    return 0;
    
}