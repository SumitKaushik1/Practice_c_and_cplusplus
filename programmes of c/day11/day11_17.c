#include<stdio.h>
int main(void)
{
    char str[]="PRECAT-OM20\0";
    printf("\nstr:%s",str);//only give str becuse str itself contain address of 
    //str[0].Since %s it starts to give all character or string from str[0]
    printf("\nsize of str:%d",sizeof(str));//just give name of array give array size directly str[0]+str[1]+......
    return 0;
}
