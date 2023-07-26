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
    st.grade='A';
    st.id=1;
    
    printf("\n:ID:%d  grade:%c",st.id,st.grade);
    return 0;

} 