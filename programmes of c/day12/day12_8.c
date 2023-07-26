
#include<stdio.h>
#include<string.h>
int main(void)
{

    char str1[20];
    char str2[20];
    printf("enter the string1:");
    scanf("%s",str1);
    printf("\nenter the strings2:");
    scanf("%s",str2);
  strcpy(str1,str2);// (destination,source)
   printf("\n%s",str1);//copy the  source string to destination string and print the destination.destination 
      printf("\n%s",str2);//string is overwritten because source string on it.
   return 0;
}