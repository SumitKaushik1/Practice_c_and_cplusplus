#include <stdio.h>
int main(void)
{
char s[]="SunbeamPune";
printf("%c ", *(&s[2]));
printf("%s ",s+5);  
printf("%s ",s);
printf("%c " ,*(s+2));
return 0;
}


/*#include<stdio.h>
int main(void)
{
char *courses[]={ "PG-DAC","PG-DESD","PG-DMC",
"PreCAT","PG-DBDA"},*temp=NULL;
int i,j;
temp = courses[3];
courses[3] = courses[4];
courses[4] = temp;


    for(j=0;j<=38;j++)

    printf("\n %c=%u",*(courses[0]+j),(courses[0]+j));


return 0;
}
*/
/*//consider 64 bit compilation for the following program.
#include<stdio.h>
int main()
{     short int b[100];
    short int a[] = { 11, 22, 33, 44 };
  short   int(*ptr)[100] = &a;
  printf("\n %u" ,ptr);
  printf(" \n%u",&a);
    printf("\n%d %d", sizeof(ptr),  sizeof(a));
    return 0;
}
*/


/*#include <stdio.h>
#include <string.h>
int main(void)

{
    char str1[1000];
    printf("enter teh string and end with dot:");
    scanf("%[^.]s", str1);
 char str3[200];
 printf("enter teh demlimt:");
 scanf("%*s");
 scanf("%[^\n]s",str3);

    char *ptr4;
    ptr4 = strtok(str1, str3);
   

    while (ptr4 != NULL)
        {

        printf("\n%s", ptr4);
        ptr4 = strtok(NULL, str3);
    }

    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main(void)
{   char str1[200];
 char str2[200];
    int i;
      printf("\nenter the first string and put dot at end:");

        scanf("%[^.]s", str1);
              printf("\nenter the second string and  put dot at end:");
        scanf("%*s");
        scanf("%[^.]s", str2);

     
    strncpy(str1,str2,2);
    printf("%s",str1);
    for(i=0;i<6;i++)
    printf("\n%c",*(str1+i));
    return 0;
*/




       

/*
#include <stdio.h>
#include <string.h>
void string_form(char str3[200])
{
    

    printf("\nenter the string:");
    scanf("%s", str3);
    return;
}

int main(void)
{ int x,y;
    
    char str1[1000];
    char str2[1000];
string_form(str1);
string_form(str2);
x = strlen(str1);
y = strlen(str2);
printf("\nlength st1:%d", x);
printf("\nlength st2:%d", y);
return 0;
}
*/



