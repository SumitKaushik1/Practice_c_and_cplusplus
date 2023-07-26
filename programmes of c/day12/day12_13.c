#include<stdio.h>
int main(int argc,char*argv[])
 {   int i;
    printf("total arguments:%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("argv[%d]  :%s",i,argv[i]);
    printf("\n");
    }
    return 0;

}