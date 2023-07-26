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
  strcat(str1,str2);
  printf("%s",str1);  
  return 0;

}