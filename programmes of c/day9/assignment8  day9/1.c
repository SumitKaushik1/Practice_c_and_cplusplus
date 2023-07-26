`#include<stdio.h>
int find_prime(int n1);
int main (void)
{
    int num ,num1,num2,count1,count2,j;
    printf("enter the number:");
    scanf("%d",&num);

   
     count1=find_prime(num);
    if (count1==2)
    printf("%d:is a prime number ",num);
    else 
    printf("%d:is not a prime number ",num);
      
    
  return 0;
}


int find_prime(int n1)
{ int i,count;
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0)
        count++;
    }
    return(count);
}