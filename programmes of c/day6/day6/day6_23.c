#include<stdio.h>
int main (void)
{
    int n1,n2,choice;
    printf("\nenter the first number:");
    scanf("%d",&n1);
    printf("\nenter the second  number:");
    scanf("%d",&n2);
    do
    {

    printf("\n1:addition  2:subtraction 3:multiplication   4:division    5:remainder" );
    printf("\nenter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\naddition:%d",n1+n2);
        break;
        case 2:
        printf("\nsubraction:%d",n1-n2);
        break;
        case 3:
        printf("\nmultiplication:%d",n1*n2);
        break;
        case 4:
        printf("\ndivision:%d",n1/n2);
        break;
        case 5:
        printf("\nremainder:%d",n1%n2);
        break;
        default:
        printf("you entered the wrong choice");
    }

    }while(choice!=0);
    return 0;

       
}