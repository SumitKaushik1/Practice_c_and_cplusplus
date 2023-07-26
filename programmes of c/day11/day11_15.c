#include<stdio.h>
int main(void)
{
    char name[10];
    printf("\n enter the name:");
    scanf("%s",name);//just give address the it starts to take string because %s.
    //only give name because name itself contain address of 
    //name[0].Since %s it starts to give all character or string from name[0]

    printf("\nyou enterd your name:%s",name);
    return 0;
}
