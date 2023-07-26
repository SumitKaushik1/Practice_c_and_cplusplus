#include <stdio.h>
int i, j;
void accept(int a[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("row[%d] column[%d]:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
int main(void)
{
    int a1[3][3], a2[3][3], res[3][3], choice;
    printf("\n enter the elements of matrix 1: ");
    accept(a1);
    printf("\n enter the elements of matrix 2: ");
    accept(a2);
    do
    {
        printf("\n0.exit 1.addition 2.subtraction 3.multiplication");
        printf("\nenter the choice:");
        scanf("%d", &choice);

        switch (choice)

        {
        case 1:

            for (i = 0; i < 3; i++)

                for (j = 0; j < 3; j++)

                {
                    res[i][j] = a1[i][j] + a2[i][j];
                }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", res[i][j]);
                }
                printf("\n");
            }

            break;

        case 2:

            for (i = 0; i < 3; i++)

                for (j = 0; j < 3; j++)

                {
                    res[i][j] = a1[i][j] - a2[i][j];
                }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", res[i][j]);
                }
                printf("\n");
            }

            break;

        case 3:

            for (i = 0; i < 3; i++)

                for (j = 0; j < 3; j++)

                {
                    res[i][j] = a1[i][j] *a2[j][i];
                }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", res[i][j]);
                }
                printf("\n");
            }

            break;

        default:
        {
            printf("\nyou entered wrong choice");
        }
        break;
        }
    } while (choice != 0);
    return 0;
}

/*{
    case 1:
    {
        for(i=0;i<3;i++)
    
        for(j=0;j<3;j++)
        
            {res[i][j]=a1[i][j]+a2[i][j];}
        

    
    for(i=0;i<3;i++)
 {   
        for(j=0;j<3;j++)
           {      
            printf("%d\t",res[i][j]);
           }
       printf("\n");
 }
     break;

    }
    case 2:
    
    {
        for(i=0;i<3;i++)
    
        for(j=0;j<3;j++)
        
            {res[i][j]=a1[i][j]-a2[i][j];}
      
         for(i=0;i<3;i++)
   { 
        for(j=0;j<3;j++)
  {      
            printf("%d\t",res[i][j]);
        
       printf("\n");
  } 
   }  
            break;
    }
    case 3:
    
    {
        for(i=0;i<3;i++)
    
        for(j=0;j<3;j++)
        
       {     res[i][j]=a1[i][j]+a2[j][i];}
        
      
    

    
for(i=0;i<3;i++)
 {   
        for(j=0;j<3;j++)
      {  
            printf("%d\t",res[i][j]);
      } 
       printf("\n");
}

break;
    }
}



}
*/
