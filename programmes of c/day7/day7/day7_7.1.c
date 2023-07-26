#include<stdio.h>//error program ====> anonymous enum cannot declare variable.
enum{comp,it, mech,civil};

int main(void)
{
enum var ;
var=comp;
printf("%d",var);
printf("%d",comp);
return 0;

}