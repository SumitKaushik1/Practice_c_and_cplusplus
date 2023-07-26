#include<stdio.h>
int main(void)
  {   int num,i;
  printf("\nenter  the year :");
  scanf("%d",&num);
  if(num%400==0||(num%100)!=0&&num%4==0)
  {
      i=printf("\nthis year is a leap year and has 366 days");
        
        if(i!=0)
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
        printf("\nthis month has  29 days ");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("this month has 30 days ");
        break;
        default:
        printf("you entered the wrong month");
        break;
    }
     }





  }
   else
  {i=printf(" this is not a leap year and it has  365 days ");
      if(i!=0)
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
        printf("\nthis month has 28  days ");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("this month has 30 days ");
        break;

    default:
    printf("you entered wrong month");
    break;

    }
      }
    



  }
  return 0;
  }