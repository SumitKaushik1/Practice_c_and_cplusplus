#include<stdio.h>
void reverse(int num,int arr[]);
int main(void)

{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the elememts:");
    for(i=0;i<=n-1;i++)
    scanf("%d",a+i);
    for(i=0;i<=n-1;i++)
    printf("\n%d",*(a+i));
    reverse(n,a);
    printf("\ninside main");
for(i=0;i<=n-1;i++)
printf("\n %d",*(a+i));    
    return 0;
}

void reverse( int num,int arr[])
{
    int *ptr;
    int i,rev[num];
    ptr=arr;
    printf("\n inside function:");
    for(i=0;i<=num-1;i++)
    rev[i]=arr[num-1-i];
    for(i=0;i<=num-1;i++)
    *(ptr+i)=rev[i];
return ;
}

//concept

/*#include<stdio.h>
void reverse(int num,int arr[]);
int main(void)

{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the elememts:");
    for(i=0;i<=n-1;i++)
    scanf("%d",a+i);
    reverse(n,a);
    
    return 0;
}

void reverse( int num,int arr[])
{
    
    int i;
    printf("\n inside function:");
    for(i=0;i<=num-1;i++)
    printf("\n%d",*(arr+i));
return ;
}*/