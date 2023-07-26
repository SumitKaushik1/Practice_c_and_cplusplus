#include<stdio.h>
#include<stdlib.h>
int main(void)
{    int *ptr=NULL;
    int n,i;
    printf("enter the elements you want to write in array:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
 {   printf("dynamic memory is not allocated");
    return 0;
}
printf("\nenter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",ptr+i);//ptr+i because ptr +i it self contain address therefore &ptr+i =address of address is wrong.
    }   //or you can write &ptr[i]
printf("\n the elements are:");
for(i=0;i<n;i++)
{
    printf("%d\t",*(ptr+i));//*(ptr+i) fetching or you can write ptr[i].
}

free(ptr);
ptr=NULL;
return 0;
}