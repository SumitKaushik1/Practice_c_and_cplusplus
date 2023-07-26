#include<stdio.h>
struct employee
{ int id;
 int salary;

};

struct employee accept()
{
    struct employee e;
    printf("enter the id:");
    scanf("%d",&e.id);
    printf("enter the salary:");
    scanf("%d",&e.salary);
    return e;

}

void disp(struct employee e1)
{
    printf("id of employee:%d salary of employee:%d",e1.id,e1.salary);
}
int main(void)
{
    struct employee emp;
    emp=accept();
    disp(emp);
     return 0;
}
