#include<stdio.h>
struct date accept();
void disp(struct date dt);
struct date 
{
    int dd,mm,yy;
};
int main (void)
{
    struct date d1;
    d1=accept();
     disp(d1);
     return 0;
}
struct date  accept()
{ 
    struct date d;
    printf("enter the date :");
    scanf("%d",&d.dd);
    printf("enter the month  :");
    scanf("%d",&d.mm);
    printf("enter the year :");
    scanf("%d",&d.yy);
    return d;
}
void disp(struct date dt)
{
    
    printf(" the date :%d--%d--%d",dt.dd,dt.mm,dt.yy);//by default it will return if you donot write return ;
        
}