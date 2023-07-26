#include<stdio.h>
struct student
{
    int marks;
    int rollno;
     double percentage ;
};
int main(void)
{ 
    struct student s;
    printf("size:%d",sizeof(s));
    return 0;
}