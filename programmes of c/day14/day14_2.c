#include<stdio.h>
struct student
{
    int marks;
     double percentage ;
};
int main(void)
{ 
    struct student s;
    printf("size:%d",sizeof(s));
    return 0;
}