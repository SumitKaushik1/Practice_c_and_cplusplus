#include<stdio.h>
int main(void)
{
    int a[4][2]={10,20,30,40,50,60,70,80};
    int*ptr[4]={(a),(a+1),(a+2),(a+3)};//\*int*ptr[4]={*(a),*(a+1),*(a+2),*(a+3)};*
    printf("\n%d",a[0][0]);
    printf("\n%d",**ptr);
    printf("\n%d",*(*ptr+1));
    printf("\n%d",*(*(ptr+1)));
    return 0;

}