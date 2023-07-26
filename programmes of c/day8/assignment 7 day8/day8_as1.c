#include<stdio.h>
int main (void)
{
    int b,i=1;
    printf("enter the number:");
    scanf("%d",&b);
    printf("all factor:1");
    {
        for(i=2;i<b;i++)
        {     
            if( (b%i)==0&&(b/i)==2)
            {printf(",%d",i);
            break;
            }
            else 
            {
            if((b%i)==0)
            printf(",%d",i);
            }
            
        }
    
    }
return 0;
}
