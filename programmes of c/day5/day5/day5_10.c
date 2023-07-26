#include<stdio.h>
int main (void)
{
    
    char ch;
    printf("enter the number:");
    scanf("%d",&ch);
    if(ch>=65&&ch<=90)
    printf("it is a lower case letter ");
    else
    if(ch>=97 && ch<=122)
    printf("it is a upper case letter ");
    else
    if(ch>=48&& ch<=57)
    printf("it is a digit");
    else
    printf("special character");

    return 0;
    

}