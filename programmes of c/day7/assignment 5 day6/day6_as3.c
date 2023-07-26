#include<stdio.h>
int main (void)
{
    int choice1,choice2;
    char choice3;
    printf("\nenter employee id:" );
    scanf("%d",&choice1);
    printf("\nenter the department number:" );
    scanf("%d",&choice2);
    scanf("%*c");
    printf("\nenter designation code:" );
    scanf("%c",&choice3);
    printf("\nthe employee with employee id  %d",choice1);
    switch(choice2)
    {
        case 10:
        printf("  is working in \"Marketing\" department");
        break;
        
        case 20:
        printf("  is working in \"Management\" department");
        break;

        case 30:
        printf("  is working in \"Sales\" department");
        break;
        
        case 40:
        printf("  is working in \"designing\" department");
        break;
    
         default:
         printf("--you entered wrong department code");
    }
    
        switch(choice3)
    {
        case 'M':
        printf(" as \"Manager \" ");
        break;
        
        case 'S':
        printf("  as \"supervisor\" ");
        break;

        case 's':
        printf("  as \"security officer\" ");
        break;
        
        case 'C':
        printf(" as \"clerk\" ");
        break;
      default :
      printf(" --you entered wrong designation code ");
    }
    return 0;

    
    }