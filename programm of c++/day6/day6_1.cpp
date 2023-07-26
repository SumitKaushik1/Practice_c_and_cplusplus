using namespace std;
#include<iostream>
class B;
class A
{
int num1;
public :
A()
{
    this->num1=50;
}
A(int num1)
{
    this->num1=num1;
}
void disp()
{
    cout<<"NUM:"<<this->num1<<endl;
}
friend  void sum(A aobj,B bobj);
};

class B
{
int num2;
public :
B()
{
    this->num2=25;
}
B(int num2)
{
    this->num2=num2;
}

void disp1()
{
    cout<<"NUM:"<<this->num2<<endl;
}
friend  void sum(A aobj,B bobj);

};

void sum(A aobj,B bobj)
{
  int res=aobj.num1+bobj.num2;
  cout<<"result:"<<res<<endl;    
}
int main(void)
{
    A a1;
    B b1;
    sum(a1,b1);
    A a2(40);
    B b2(60);
    sum(a2,b2);
    
return 0;
}