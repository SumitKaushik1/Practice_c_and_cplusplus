#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[30];
    char ch;
    char *ptr=NULL;
    printf("\nenter the string:");
    scanf("%[^\n]s",&str[0]);
    printf("\nenter the character:");
    scanf("%*c");
    scanf("%c",&ch);
    ptr=strchr(&str[0],ch);
    if(ptr==NULL)
    printf("the character is not found");
    else 
    printf("character is  found");
    return 0;
}