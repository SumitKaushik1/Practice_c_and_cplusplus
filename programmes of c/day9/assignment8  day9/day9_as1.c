#include<stdio.h>
int flag=0;
int accept_number();
char accept_operater();
int  calculator(int nm1,int nm2,char op3);
void print_result(int res1);
int main(void)
{
    int num1,num2,res;
    char op;
    num1=accept_number();
    num2=accept_number();
    if(num2==0)
    flag=1;
    op=accept_operater();
    res=calculator(num1,num2,op);
    if(flag==-1) 
    printf("you entered 0 as denominator ");
    else
    if(res==2)
    goto l1;
    else
     print_result(res);
    l1:return 0;
}

int accept_number()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;

}

char accept_operater()
{
    char op1;
    printf("enter +,-,*,/ opertor:");
    scanf("%*c%c",&op1);
    return op1;
}

int calculator(int nm1,int nm2,char op3)
{ int res;
    switch(op3)
    {
        case'+':
        res =nm1+nm2;
        break;
        
        
        case'-':
        res =nm1-nm2;
        break;

        
        case'*':
        res =nm1*nm2;
        break;

        
        case'/':
        if(nm2==0&&op3=='/')
          {return -1;}
          else
          res=nm1/nm2;
        break;

        
        default:
         printf("you entered wrong operator");
        res=2;
        break;
         
    }
    return res;
}

void print_result(int res1)
{
      printf("the result value:%d",res1);
}