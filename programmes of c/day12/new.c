#include <stdio.h>
#include<string.h>
int main(void)

{
    char str[]="i am a scientist";
    char*ptr,*ptr2,*ptr3;
    int i;
    printf("starting");
    for(i=0;i<17;i++)
    {
        printf(" %c=%u\n",*(str+i),str+i);

    }
         printf("\n1st time");
    ptr= strtok(str," ");
     printf("\n%s",ptr) ;                 
     printf("\n%u",ptr);


printf("\nafter first strok");
    for(i=0;i<17;i++)
    {
        printf(" %c=%u\n",*(str+i),str+i);

    }



    

printf("\n2ndt time");
    ptr= strtok(NULL," ");
     printf("\n%s",ptr) ;                 
     printf("\n%u",ptr);

printf("\nafter second strok");
    for(i=0;i<17;i++)
    {
        printf(" %c=%u\n",*(str+i),str+i);

    }
    
    printf("\n3nd time");

    ptr3= strtok(NULL," ");
         printf("\n%s",ptr3) ;                 
     printf("\n%u",ptr3);
     printf("\nafter third strok");             
    for(i=0;i<19;i++)
    {
        printf(" %c=%u\n",*(str+i),str+i);

    }

    printf("\n4rthd time");

    ptr3= strtok(NULL," ");
         printf("\n%s",ptr3) ;                 
     printf("\n%u",ptr3);
     printf("\nafter third strok");             
    for(i=0;i<19;i++)
    {
        printf(" %c=%u\n",*(str+i),str+i);

    }

    return 0;
}












/*
{
    int mat[2][2] = {{1, 1}, {1, 2}, {2, 1}, {2, 2}}; //int mat[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int i, j;

    printf("\narray elements are:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/