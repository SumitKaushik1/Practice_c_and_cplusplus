#include<stdio.h>
void accept(  int r1,int c1,int a1[r1][c1])
{   
     int j,i;
     printf("\nenter the elements(integer):");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
    {
      printf("\nrow:[%d] column:[%d]:",i+1,j+1);
      scanf("%d",&a1[i][j]);
    }

}
}
void disp(int r2,int c2,int a2[r2][c2])
{
  int j,i;
    printf(" \nthe elements are (integer):");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
    {
      printf("\nrow:[%d] column:[%d]:%d",i+1,j+1,a2[i][j]);
      
      }
    
}
}
int main(void)
{      
    int r,c;
    printf("enter the number of row:");
    scanf("%d",&r);
    printf("enter the number of column:");
    scanf("%d",&c);
    int a[r][c];
    accept(c,r,a);
    disp(c,r,a);
    return 0;
}

