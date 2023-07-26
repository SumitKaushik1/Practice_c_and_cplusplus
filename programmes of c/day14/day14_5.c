#include<stdio.h>
#pragma pack(1)//#pragma pack(2) the memeory is allocated by 2 bytes rollno:2+2,marks:2+2,grade :2==ie total 10 bytes
struct student

{
    int rollno;
    int marks;
    char grade;
 
 
};
int main(void)
{ 
    struct student s;
    printf("size:%d",sizeof(s));
    return 0;
}