#include<stdio.h>
int main (void)
{
    float x,y;
    printf("\nenter the  x coordinate in cartison system:");
    scanf("%f",&x);
    printf("\nenter the  y coordinate in cartison system:");
    scanf("%f",&y);
    if(x!=0|| y!=0)
    {

    if (x>0&& y>0)
    printf("1st");
    else 
    if(x<0&&y>0)
    printf("2nd");
    else
    if(x<0&&y<0)
    printf("3rd");
    else
    if(x>0&&y<0)
    printf("4rth");
    else
    if(x!=0&&y==0)
    printf(" only x");
    else
    if(x==0&&y!=0)
    printf(" only y");
    

    }

    else
    printf("point on origin");
    
    return 0;
}
