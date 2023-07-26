//error program
using namespace std;
#include<iostream>       
void print(int a=100,int b=200,int c=300,int d);//d is not declared
int main(void)
{
    print(10,20,30,40);
    print(10,20,30);
    print(10,20);
    print(10);
    print();
 return 0;
}

void print(int a,int b,int c,int d)
{
    cout<<"\na:"<<a<<" b:"<<b<<" c:"<<c<<" d:"<<d;
}