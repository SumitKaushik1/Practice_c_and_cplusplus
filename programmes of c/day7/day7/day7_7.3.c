#include<stdio.h>
typedef enum{comp,it, mech,civil} dept;

int main(void)
{
dept var ;
var=comp;
printf("\n%d",var);
printf("\n%d",comp);
return 0;

}