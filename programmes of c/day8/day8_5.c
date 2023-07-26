//garbage value program
#include<stdio.h>
int accept_numbers();
int main(void)
{   int n1,n2,n3,n4;
n1= accept_numbers();
  n2 = accept_numbers();
   n3 =accept_numbers();
    n4=accept_numbers();
    printf("%d %d  %d %d",n1,n2,n3,n4);
    printf("%d",accept_numbers());
    return 0;
}
int accept_numbers()
{    int num;
    printf("\nenter the number:");
    scanf("%d",&num);
      return num;


}
