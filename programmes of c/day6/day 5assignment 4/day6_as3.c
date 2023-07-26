#include<stdio.h>
int main (void)
{
    int q,p3;
    float p1,p2;
    printf("enter the quantity;");
    scanf("%d",&q);
    
    if(q>50)
    {p1=5*q*0.85;
    printf("the total price:%.2f",(float)p1);
    }
    else
    {
    if(q>30&&q<=50)
    {p2=5*q*0.90;
    printf("the total price:%.2f",(float)p2);
    
    }
    else
    {p3=5*q;
    printf("the total price :%d",p3);
    }
    
    }
    return 0;


}