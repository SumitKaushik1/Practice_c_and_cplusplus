#include<stdio.h>
struct student
{
    int id;
    int rollno;
    int marks;
    char grade;
    int result;
    char ch1;
    char ch2;

};
int main(void)
{ 
    struct student s;
    printf("size:%d",sizeof(s));
    return 0;
}