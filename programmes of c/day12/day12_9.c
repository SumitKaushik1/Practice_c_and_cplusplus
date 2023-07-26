#include<stdio.h>
int main(void)
{
    int a[3][3];
    int i,j;
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
    return 0;
}