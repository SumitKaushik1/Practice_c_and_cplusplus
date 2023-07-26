#include<stdio.h>
int min(int num1,int arr1[]);
int max(int num2,int arr2[]);
int main(void)
{int  i,n,x,y;
printf("\nenter the size of an array:");
scanf("%d",&n);
int a[n];
for(i=0;i<=n-1;i++)
scanf("%d",a+i);
x=min(n,a);
y=max(n,a);
printf("\nmin:%d",x);
printf("\nmax:%d",y);
return 0;
}

int min(int num1,int arr1[])
{
    int i,min=arr1[0];
    for(i=0;i<=num1-1;i++)
    {
        if(min>arr1[i])
        min=arr1[i];
    }
        return min;
    
}

int max(int num2,int arr2[])
{
    int i, max=arr2[0];
    for(i=0;i<=num2-1;i++)
    {
        if(max<arr2[i])
        max=arr2[i];
    }
        
        return max;
    
}