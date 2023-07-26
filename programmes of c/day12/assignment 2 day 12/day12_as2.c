#include <stdio.h>// string which  must  not contain space. 
#include <string.h>
void string_form(char str3[200])
{

    printf("\nenter the string:");
    scanf("%s", str3);
    return;
}


 
int main(void)
{
  char str1[200], str2[200];
 char *ptr1,*ptr2;
  int x, y;
  int choice;
  printf("  0. EXIT 1.strlen 2. strrev 3.strcpy");
  
   do
    {
        printf("\nenter the choice:");

        scanf("%d", &choice);

        switch (choice)
        {
    
    
     case 1:
        printf("\nlength of the strings:");
            string_form(str1);
            scanf("%*c");
            string_form(str2);
            x = strlen(str1);
            y = strlen(str2);
            printf("\nlength st1:%d", x);
            printf("\nlength st2:%d", y);

            break;

    case 2:
     printf("\nreverse of string:");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);
            ptr1=strrev(str1);
            ptr2=strrev(str2);
            printf("\n address st1:%u", ptr1);
            printf("\naddress st2:%u", ptr2);
            
            printf("\n address st1:%u", str1);
            printf("\naddress st2:%u", str2);
            printf("\nreverse st1:%s", str1);
            printf("\n reverse st1:%s", str2);
            break;
            
            case 3:

             printf("\ncopy of string:");
            printf("\nsource string");
            string_form(str2);
            printf("destination string");
            string_form(str1);
           ptr1= strcpy(str1, str2);
            printf("\n address st1:%u", ptr1);
            printf("\n address st1:%u", str1);
            printf("\ndestination string become:%s", str1);
            break;



  } 
  } while(choice!=0);
  return 0;
}