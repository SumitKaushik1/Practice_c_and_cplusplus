#include<stdio.h>
struct student 
{
    int rollno;
    int marks;
    char grade;
    };
    int main(void)
     {   int i;
        struct student s[5];
        printf("\nenter the details of student");
        for(i=0;i<5;i++)
        {printf("\nenter the rollno:");
        scanf("%d",&s[i].rollno);
        printf("\nenter the marks:");
        scanf("%d",&s[i].marks);
        printf("\nenter the grade:");
        scanf("%*c");
        scanf("%c",&s[i].grade);
        } 
        printf("\n students details are:");
        for(i=0;i<5;i++)

        {   printf("\nstudent:%d",i+1);
            printf("\n the rollno:%d",s[i].rollno);
        printf(" \nthe marks:%d",s[i].marks);
        printf("\n the grade:%c",s[i].grade);
        }
        return 0;


    }
