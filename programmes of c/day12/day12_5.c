#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    int len;
    printf("enter the string:");
    scanf("%[^\n]s",&str[0]);//only address has to pass // str or &str you can pass
    len =strlen(&str[0]);//only address has to pass  // str or &str you can pass
    //all have same address
    printf("\n%d",len);
    return 0;
}