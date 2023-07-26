#include<stdio.h>
union student 
{
    int id;
    char grade;
};
int main (void)
{
    union student st;
    printf("\nsize:%d",sizeof(st));
    st.id=1;
    st.grade='A';
    printf("\n:ID:%d  grade:%c",st.id,st.grade);
    return 0;

} 