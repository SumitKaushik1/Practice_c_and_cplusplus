#include<stdio.h>
int main(void)
{
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("source1.txt","r");
   fptr2=fopen("source2.txt","w");
    printf("fptr2:%u",fptr2);
    if(fptr2==NULL)
    {
        printf("file is not opened");
         return 0;
    }
    while((ch=fgetc(fptr1))!=EOF)
    {
        fputc(ch,fptr2);
    }
    return 0;
}