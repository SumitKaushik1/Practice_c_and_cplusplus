#include<stdio.h>
void get();
void disp();
void (*fnptr)();
int main (void)
{
    printf("\nthe address get function:%u",get);
    fnptr=get;
    printf("\nthe address fnptr function:%u",fnptr);
    (*fnptr)();
    printf("\nthe address disp function:%u",disp);
    fnptr=disp;
    printf("\nthe address  fnptr function:%u",fnptr);
    (*fnptr)();
    return 0;
    
}

void get ()
{
    printf("\ninside get function");

}
void disp()
{
    printf("\ninside disp function");
}