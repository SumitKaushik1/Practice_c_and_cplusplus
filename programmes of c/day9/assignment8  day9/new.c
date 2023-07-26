#include <stdio.h>

void print_result(int res);
int calculate(int num1,int num2,char op);

int main(void)
{  int num1,num2, res;
    char op;
  
     printf("enter the number:");
    scanf("%d",&num1);
   printf("enter the number:");
    scanf("%d",&num2);
 
    if(num2==0)
        flag=1;
	
       printf("enter +,-,*,/ opertor:");
    scanf("%*c%c",&op);
	
    res= calculate(num1,num2,op);
	if(res==-1 && op=='/')
        printf("\nUser entered '0' value for divisor");
    else
	    print_result(res);
	
	return 0;
}


void print_result(int res)
{
    printf("\nResult  :%d",res);
}

int calculate(int num1,int num2,char op)
{
    int res;
    switch(op)
    {
        case '+':
            res=num1+num2;
             break;
        case '-':
            res=num1-num2;
            break;
        case '*':
            res=num1*num2;
            break;
        case '/':
            if(flag==1)
            {
                return -1;
            }
            else
                res=num1/num2;
            break;
        default:
            printf("\nInvalid choice");
            break;
    }
    
    return res;
}

/*#include<stdio.h>
int main(void)
{
    int num1,num2, res1;
    char op;
     printf("enter +,-,*,/ opertor:");
    scanf("%c",op);
     printf("enter the number:");
    scanf("%d",&num1);
   printf("enter the number:");
    scanf("%d",&num2);
   
     switch(op)
    {
        case'+':
        res1 =num1+num2;
        break;
        
        case'-':
        res1=num1-num2;
        break;

        
        case'*':
        res1 =num1*num2;
        break;

        
        case'/':
        if(num2==0&&op=='/')
          printf("you entered o as denominator");
          else
          res1=num1/num2;
        break;

        
        default:
         printf("you entered wrong choice");                         
        break;
    } printf("\n*");
    return 0;
}
  */