using namespace std;
#include<iostream>
#include"emp.h"
employee::employee()
{
    this->id=1;
    this->sal=50000;
}
employee::employee(int id,int sal)
{
    this->id=id;
    this->sal=sal;
}
void employee::accept()
{
    cout<<"enter the id:";
    cin>>this->id;
    cout<<"enter the sal:";
    cin>>this->sal;
}
void employee::disp()
{
    cout<<"ID:"<<this->id<<"  salary:"<<this->sal<<endl;
}

