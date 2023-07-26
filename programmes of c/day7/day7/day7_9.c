#include<stdio.h>
void sum_of_number();
int main (void)

{
    
    printf("\ninside main...");
    sum_of_number();
    printf("\nback to main...");
    sum_of_number();
    return 0;

}
  void sum_of_number()

{ int n1,n2;
printf("\nenter the first number:");
scanf("%d",&n1);
printf("\nenter the second number :");
scanf("%d",&n2);
printf("\naddition:%d",n1+n2);
//return is not required because we are not returning value thats why 
}

