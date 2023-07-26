#include<stdio.h>
struct student
{
    int rollno;
    int marks;
    char grade;
}s;
int main (void)
{   printf("enter the roll no:");
     scanf("%d",&s.rollno);
   printf("\nenter the marks:");
     scanf("%d",&s.marks);
     printf("\nenter the grade:");
     scanf("%*c");
     scanf("%c",&s.grade);
   printf("s: rollno: %d   marks:%d   grade: %c",s.rollno,s.marks,s.grade);
   
   
   return 0;
}