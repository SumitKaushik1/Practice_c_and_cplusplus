#include<stdio.h>
int i,j;
void accept_this(int a[3][3])
{
    printf("enter the array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }

    }
      printf("\narray elements are:");
           for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}   
int main(void)
{
    int a[3][3],b[3][3];
    int i,j;
     accept_this(a);
    accept_this(b);

    return 0;

}  






    