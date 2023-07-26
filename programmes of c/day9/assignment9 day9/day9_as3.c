#include<stdio.h>
void character(int ch,int n)
{
    if(n==1)
    {printf("%2c",ch);
    return;
    }
    else 
    {
        printf("%2c",ch);
        character(ch,--n);
        return ; 
    }
}
int main(void)
{
    char ch1;
    int n1;
    printf("\nenter the character::");
    scanf("%c",&ch1);
    printf("\nenter the number of times::");
    scanf("%d",&n1);
    character(ch1,n1);
    return 0;

}