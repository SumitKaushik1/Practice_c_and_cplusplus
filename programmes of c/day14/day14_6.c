#include<stdio.h>
struct student
{
 
char name[20];
int rn:5;
int marks:4;
};
int main(void)
{ 
    struct student s;
    printf("size:%d",sizeof(s));
    return 0;
}