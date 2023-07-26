//garbage value program
#include<stdio.h>
int accept_numbers();
int main(void)
{   int n1,n2,n3,n4;
    accept_numbers();
    accept_numbers();
    accept_numbers();
    accept_numbers();
    printf("%d %d  %d %d",n1,n2,n3,n4);
    return 0;
}
int accept_numbers()
{    int num;
    printf("enter the number:");
    scanf("%d",&num);
      return num;


}


