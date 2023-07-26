#include<stdio.h>
struct employee
{
    int id;
    int salary;
    char name[20];
};
int main(void)
{
    struct employee e={1,50000,"abc"};//string is always in double quatation mmark
     printf("\n ID:%d  salary:%d   name:%s",e.id,e.salary,e.name);
     printf("\n address:ID:%u  salary:%u   name:%u",&e.id,&e.salary,&e.name);
     struct employee *ptr=&e;
     printf("\naddress of e:%u",ptr);
printf("\n ID:%d  salary:%d   name:%s",ptr->id,ptr->salary,ptr->name);
printf("\n  address:ID:%u  salary:%u   name:%u",&(ptr->id),&(ptr->salary),&(ptr->name));
return 0;


}