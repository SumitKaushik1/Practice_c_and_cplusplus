using namespace std;
#include<iostream>
#include "emp.h"
int main(void)
{
    employee e1;
    e1.disp();
    employee e2(20,60000);
    e2.disp();
    employee e3;
    e3.accept();
    e3.disp();
     return 0;
    
}