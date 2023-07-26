#include<stdio.h>
enum menu{ exit,add,sub,mul,div,mod};
int main (void)
{
    int n1,n2;
    enum menu choice;
    printf("\nenter the first number:");
    scanf("%d",&n1);
    printf("\nenter the second  number:");
    scanf("%d",&n2);
    do
    {

    printf("\n0:exit 1:addition  2:subtraction 3:multiplication   4:division    5:remainder" );
    printf("\nenter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case add:
        printf("\naddition:%d",n1+n2);
        break;
        case sub:
        printf("\nsubraction:%d",n1-n2);
        break;
        case mul:
        printf("\nmultiplication:%d",n1*n2);
        break;
        case div:
        printf("\ndivision:%d",n1/n2);
        break;
        case mod:
        printf("\nremainder:%d",n1%n2);
        break;
        default:
        printf("you entered the wrong choice");
    }

    }while(choice!=exit);
    return 0;

       
}