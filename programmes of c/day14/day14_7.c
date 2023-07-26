#include<stdio.h>
union student 
{
    int id;
    char grade;
};
int main (void)
{
    union student st;
    st.id=1;
    printf("ID:%d",st.id);
    st.grade='A';
    printf("\n ID: grade:%c",st.grade);
    return 0;

} 