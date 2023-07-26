
using namespace std;
#include<iostream>
struct employee
{
    int id;
    int salary;
    void accept()
    {
    cout<<"enter id:";
    cin>>id;
    cout<<"enter the salary:";
    cin>>salary;
    }
    void disp()
{
    cout<<"the id:"<<id<<" ,the salary:"<<salary;
}

};

 int main(void)
 {   struct employee emp;
     emp.accept();
     emp. disp();
     return 0;
 }