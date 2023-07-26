#include<stdio.h>
int main (void)
{
    int choice;
    printf("\nenter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 2/1://must be integer 
        printf("\nletter is upper case A");
        break;
        case 2+2:
        printf("\nletter is lower case a");
        break;
        default:
        printf("you entered the wrong choics");
        break;
    }

    return 0;

       
}