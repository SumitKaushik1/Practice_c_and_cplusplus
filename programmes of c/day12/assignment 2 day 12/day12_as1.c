#include <stdio.h>
#include <string.h>// do not provide space between strings of str1 and str2
void string_form(char str3[200])
{

    printf("\nenter the string:");
    scanf("%s", str3);
    return;
}

void string_form1(char str4[200])
{

    printf("\nenter the delimit:");
    scanf("%s", str4);
    return;
}

int main(void)
{   int c;
    int choice, res, z, num, y, x;
    char str1[1000];
    char str2[1000];
    char ch1, ch2, ch, *ptr1, *ptr2, *ptr3, *ptr4;
    char str3[200], str4[200];
    printf("  0. EXIT 1. strlen() 2. strcpy() 3. strcat() 4. strcmp() 5. stricmp() 6. strrev() 7. strchr() 8. strstr()");
   printf(" \n9. strncpy() 10. strncat() 11. strncmp() 12. strtok()");
    do
    {
        printf("\nenter the choice:");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        printf("\nlength of the strings:");
            string_form(str1);
            string_form(str2);
            x = strlen(str1);
            y = strlen(str2);
            printf("\nlength st1:%d", x);
            printf("\nlength st2:%d", y);

            break;

        case 2:
        printf("\ncopy of string:");
            printf("\nsource string");
            string_form(str2);
            printf("destination string");
            string_form(str1);
            strcpy(str1, str2);
            printf("\ndestination string become:%s", str1);
            break;

        case 3:
        printf("\ncombine or cancatanation of strings:");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);

            strcat(str1, str2);
            printf("\n  st1==>st1+st2:%s", str1);
            break;

        case 4:
           printf("\ncomparision of string:");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);
            res = strcmp(str1, str2);
            if (res == 0)
                printf("\nstrings are equal");
            else
                printf("\nstrings are not equal");
            break;

        case 5:
        printf("\ncaomparison of string without case sensitive ");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);
            res = stricmp(str1, str2);

            if (res == 0)
                printf("\n both strings are same");
            else if (res > 0)
                printf("str1 is greater than str2");
            else
                printf("\nstr1 is smaller tha str2");
            break;

        case 6:
              printf("\nreverse of string:");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);
            strrev(str1);
            strrev(str2);
            printf("\nreverse st1:%s", str1);
            printf("\n reverse st1:%s", str2);
            break;

        case 7:
             printf("\n searching of character in string:");
            printf("\nstring 1:");
            string_form(str1);
            printf("\n enter the character of the string1:");
            scanf("%*c");
            scanf("%c", &ch1);
            ptr1 = strchr(str1, ch1);
            {
                if (ptr1 == NULL)
                    printf("\ncharacter is not found in string 1");
                else
                    printf("\ncharacter is  found in string 1");
            }
            printf("\nstring 2:");
            string_form(str2);
            printf("\n enter the character of the string2:");
            scanf("%*c");
            scanf("%c", &ch2);
            ptr2 = strchr(str2, ch2);
            {
                if (ptr2 == NULL)
                    printf("\ncharacter is not found in string 2");
                else
                    printf("\ncharacter is  found in string 2");
            }

            break;

        case 8:
        printf("\nsearching of substring in string");

            string_form(str1);
            printf("\nenter the subtring:");
            string_form(str2);
            ptr3 = strstr(str1, str2);
            if (ptr3 == NULL)
                printf("\nsubstring is not found");
            else
                printf("\nsubstring is found");
            break;

        case 9:
printf("\n copy of finite number of character in a string");
            printf("source :");
            string_form(str2);
            printf(" destination ");
            string_form(str1);
            printf("number of character you want copy from source to destination:");
            scanf("%d",&c);
            strncpy(str1, str2, c);
            printf("\nafter copied at destination:%s", str1);
            break;

        case 10:
               printf("\ncombine or cancatanation of strings with finite character:");
            printf(" string1:");
            string_form(str1);
            printf(" string2 ");
            string_form(str2);
            printf("number of character you want cancatanate of string2 to string1:");
            scanf("%d",&c);
            strncat(str1, str2, c);
            printf("\n  st1==>st1+st2:%s", str1);
            break;

        case 11:
              printf("\ncomparison of string with finite characters ");
            printf("\nstring1:");
            string_form(str1);
            printf("string2:");
            string_form(str2);
            printf("number of character you want  to compare of string1 to string2:");
            scanf("%d",&c);
            z = strncmp(str1, str2, c);
            printf("\nz==> %d", z);
            if (z == 0)
                printf("\nboth string are same");
            else
            {
                if (z < 0)
                    printf("\nstr1 is less than str2");
                else
                    printf("\nstr1 is greater than str2");
            }
            break;

        case 12:
           printf("\n tokenise:");
            string_form(str1);
            string_form1(str2);
             printf(" tokenise==>string accros the delimt :");
            ptr4 = strtok(str1, str2);

            while (ptr4!=NULL)
            {

                printf("\n%s", ptr4);
                ptr4 = strtok(NULL, str2);
            }

            break;
        default:
            printf("\n you entered wrong choice");
            break;
        }
    } while (choice != 0);

    return 0;
}
