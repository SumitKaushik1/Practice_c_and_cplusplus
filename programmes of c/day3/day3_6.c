#include<stdio.h>
int main(void)
{
    int  num;
    char ch,ch1,ch2;
        printf("\nenter the number:");
    scanf("%d",&num);
    printf("\nenter the character:");
    scanf("%c",&ch);
     printf(" \nch:%c  num:%d",ch,num);
    printf("\nenter the first character:");
    scanf("%c",&ch1);
    printf("\nenter the second character:");
     scanf("%c",&ch2);
    printf("\nthe first character:%c   the second character:%c   ascii value of first :%d  acii value of second: %d ",ch1,ch2,ch1,ch2);   
     printf("\nenter the first character:");
    scanf("%c",&ch1);
    printf("\nenter the second character:");
     scanf("%*c");
     scanf("%c",&ch2);
    printf("\nthe first character:%c   the second character:%c   ascii value of first :%d  acii value of second: %d ",ch1,ch2,ch1,ch2);
     return 0;


}