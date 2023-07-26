#include<stdio.h>
enum departments{admin,training,placement};
int main (void)
{
    enum departments d;
    printf(" \n %2d%2d%2d",admin,training,placement);
    d=admin;
    printf("\n value of d=%d",d);
    d=placement;
    printf("\n value of d=%d",d);
    return 0;
    


}