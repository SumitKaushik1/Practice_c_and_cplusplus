#include<stdio.h>
struct employee
{
    int id;
    int salary;
    struct 
    {
       int dd,mm,yy;
       
    }dob;
    
};
int main(void)
{
    struct employee e;
    e.id=1;
    e.salary=50000;
    e.dob.dd=2;
    e.dob.mm=6;
    e.dob.yy=2021;
    printf("ID:%d salary:%d",e.id,e.salary);
    printf("\n date:%d--%d--%d",e.dob.dd,e.dob.mm,e.dob.yy);
    return 0;
}