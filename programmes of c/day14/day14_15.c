#include<stdio.h>
int main (void)
{
    FILE *fptr;
    fptr=fopen("src.txt","r");
    fseek(fptr,10,SEEK_SET);//10 is positive means see from left to right
    printf("\n%c   %u",fgetc(fptr),ftell(fptr));
    fseek(fptr,5,SEEK_CUR);
    printf("\n%c  %u",fgetc(fptr),ftell(fptr));
    return 0;
}