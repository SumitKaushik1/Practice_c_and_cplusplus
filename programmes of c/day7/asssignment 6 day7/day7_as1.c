#include<stdio.h>
int main (void)
{   unsigned int choice;
    do
    {    int num,ad=0,rev=0,rem,a;
    printf("\n1.sum of digits  2.reverse of number 3.number is pallindromme or not 4.number is armstrong number or not");
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
        
    printf("\nenter any  digit number:");
    scanf("%d",&num);

    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=rem;
    printf("%d",rem);
    if(num==0)
    continue;
    printf("+");
    } 
    printf("\n =%d==> is the addition of digits",ad);
    break;

    case 2:
     printf("enter any  digit number:");
    scanf("%d",&num);
     a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;
    }
    printf("the reversed number :%d",rev);
    break;


     case 3:
     
    printf("\nenter any  digit number:");
    scanf("%d",&num);
     a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;
    }
    printf("\nthe reversed number :%d",rev);
    if(rev==a)
    {printf("\nthe given number  is pallindrome");
    }
    else
    {printf("\nthis given number is not pallindrome");
    }

     break;

     case 4:
       
    printf("\nenter any  digit number:");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=(rem*rem*rem);
    }
    printf("  ad :%d",ad);
    if(ad==a)
    {printf("\n%d:this number  is  armstrong number",a);
    }
    else
    {printf("\n%d:this number  is not armstrong number",a);
    }
 
    break;

    default:
    printf("you entered the wrong choice");
        }
        
    }while(choice!=0&&choice<=4);
        

       return 0;
    }


/*
#include<stdio.h>
int main (void)
{
    int num,rem,ad=0,rev=0,a;
    printf("enter any  digit number:");
    scanf("%d",&num);
     a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;
    }
    printf("the reversed number :%d",rev);
    return 0;
    }

    */  
/*
    printf("\nenter any  digit number:");
    scanf("%d",&num);

    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    printf("%d==>revresed number",rem);
    }
     break;
/*


   
  /*  
    }
    int num,rem,ad=0,rev=0,a;
    printf("enter any  digit number:");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=(rem*rem*rem);
    }
    printf("  ad :%d",ad);
    if(ad==a)
    {printf("\n%d:the number  is  armstrong number",a);
    }
    else
    {printf("\n%d:the number  is not armstrong number",a);
    }
    return 0;
}*/
    




/*#include<stdio.h>
int main (void)
{
    int num,rem,ad=0,rev=0;
    printf("enter any  digit number:");
    scanf("%d",&num);
     a=num;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;
    }
    printf("the reversed number :%d",rev);
    if(rev==num)
    {printf("\nthe given number  is pallindrome");
    }
    else
    {printf("\nthis given number is not pallindrome");
    }
    return 0;
}
    





#include<stdio.h>
int main (void)
{
    int num,rem,ad=0;
    printf("enter any  digit number:");
    scanf("%d",&num);

    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=rem;
    printf("%d",rem);
    }
    return 0;
}





#include<stdio.h>
int main (void)
{
    int num,rem,ad=0;
    printf("enter any  digit number:");
    scanf("%d",&num);

    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=rem;
    printf("%d",rem);
    if(num==0)
    continue;
    printf("+");
    } 
    printf(" =%d",ad);
    return 0;
}

#include<stdio.h>
int main (void)
{
    int num,rem,ad=0;
    printf("enter any  digit number:");
    scanf("%d",&num);

    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    ad+=rem;
    printf("%d",rem);
    if(num==0)
    break;
    printf("+");
    } 
    printf(" =%d",ad);
    return 0;
}*/
