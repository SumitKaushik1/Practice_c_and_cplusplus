#include<stdio.h>
int main(void)
{
    char*str="sunbeam";
    printf("\nstr:%u",str);
    printf("\ncharacter:%c",*str);
        printf("\ncharacter:%c",*(str+4));
            printf("\ncharacter:%c",*str+4);
    return 0;
    
}