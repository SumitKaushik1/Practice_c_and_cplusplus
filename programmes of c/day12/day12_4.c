#include<stdio.h>
int main(void)
{
    char str[20];
    printf("enter the string:");
    scanf("%[A-Z]s",&str[0]);//just you have to give address from where you have to put string//scanf("%s",&str or str );
    
    printf("name:%s",&str[0]);
    //just you have to give address from where you have to get string //printf("name:%s",&str or str);
    return 0;
}