#include<stdio.h>
int main(void)
{
    FILE *fptr;
    char ch;
    fptr=fopen("source.txt","r");
    if(fptr==NULL)
    {
        printf("file is not opened");
         return 0;
    }
    while((ch=fgetc(fptr))!=EOF)
    {
        fputc(ch,stdout);
    }
    return 0;
}