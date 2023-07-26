#include<stdio.h>
int fact_number(int num);
int main(void)
{
    int num,ans=1;
    printf(" enter the number ");
    scanf("%d",&num);
    ans=fact_number(num);
    printf(" factorial of number : %d",ans);
    return 0;
}

int fact_number (int num)
{ int ans=1;
    while(num)
    {
        ans=ans*num;
        num--;
    }
    return ans;
}