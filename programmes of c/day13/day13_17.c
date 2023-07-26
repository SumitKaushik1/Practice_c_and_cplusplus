#include<stdio.h>
struct student
{
    int rollno;
    int marks;
    char grade;
}s1={1,90,'A'},s2={2,80,'B'};
int main (void)
{

   printf("s1: rollno: %d   marks:%d   grade: %c",s1.rollno,s1.marks,s1.grade);
   
   printf("\ns2: rollno: %d   marks:%d   grade: %c",s2.rollno,s2.marks,s2.grade);
   return 0;
}