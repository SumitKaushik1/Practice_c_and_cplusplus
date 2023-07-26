#include<stdio.h>
struct  student 
{
    int id;//4 byte 
    char grade;//4 byte   
}; //total =8 byte
int main (void)
{
    struct student s1;
    printf("size:%d",sizeof(struct student));
    return 0;

} 