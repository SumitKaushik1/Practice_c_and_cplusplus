#include<stdio.h>
int main (void)
{
    int month ;
    printf("\nenter the month :");
    scanf("%d",&month);
    switch(month)
    {
        case 7:
        case 3:
        case 5:
        case 8:
        case 1:
        case 12:
        printf("\nthis month has 31 days ");
        break;
        case 2:
        printf("\nthis month has 28 and 29 days ");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("this month has 30 days ");
        break;
    }

    return 0;

       
}