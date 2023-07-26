#include<stdio.h>//for anonymous structure we can declare  structure variable like this. 
struct 
{
    int rollno;
    int marks;
    char grade;
}v1;
int main (void)
{   printf("enter the roll no:");
     scanf("%d",&v1.rollno);
   printf("\nenter the marks:");
     scanf("%d",&v1.marks);
     printf("\nenter the grade:");
     scanf("%*c");
     scanf("%c",&v1.grade);
   printf("s: rollno: %d   marks:%d   grade: %c",v1.rollno,v1.marks,v1.grade);
   
   
   return 0;
}