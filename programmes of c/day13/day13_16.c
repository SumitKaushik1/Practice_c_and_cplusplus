#include<stdio.h>
struct student
{
    int rollno;
    int marks;
    char grade;
}s1,s2;
int main (void)
{
    
    s1.rollno=1;
    s1.marks=90;
    s1.grade='A';
   printf("s1: rollno: %d   marks:%d   grade: %c",s1.rollno,s1.marks,s1.grade);
   s2=s1;
   printf("\ns2: rollno: %d   marks:%d   grade: %c",s2.rollno,s2.marks,s2.grade);
   return 0;
}