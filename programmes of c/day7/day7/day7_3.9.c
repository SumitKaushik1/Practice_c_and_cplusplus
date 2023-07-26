#include<stdio.h>//error program

enum colors{red,blue,green,yellow=40,red};

int main (void)
{
printf("\nthe value of red:%d",red);
printf("\nthe value of blue:%d",blue);
printf("\nthe value of green:%d",green);
printf("\nthe value of yellow:%d",yellow);
return 0;

}