#include<stdio.h>
typedef struct student 
{
    int rollno;
    int marks;
    char grade;
    } stud;
    
int main (void)
{   stud s;
    
     printf("enter the roll no:");
     scanf("%d",&s.rollno);
   printf("\nenter the marks:");
     scanf("%d",&s.marks);
     printf("\nenter the grade:");
     scanf("%*c");
     scanf("%c",&s.grade);
   printf("s: rollno: %d   marks:%d   grade: %c",s.rollno,s.marks,s.grade);
   
   
   return 0;
}