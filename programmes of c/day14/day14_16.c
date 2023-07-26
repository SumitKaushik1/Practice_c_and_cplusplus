#include<stdio.h>
int main (void)
{
    FILE *fptr;
    fptr=fopen("src.txt","r");
    fseek(fptr,-5,SEEK_END);//-5 is negative see from right to left.
    printf("\n%c   %u",fgetc(fptr),ftell(fptr));
    return 0;
}
