using namespace std;
#include<iostream>
class A
{
 public:
 int a;
};
class B:public A
{
    public:
    int b;

};

class C: public A
{
   public :
   int c;
};
 class D:public B,public C
 {

     public :
     int d;

 } ;
int main(void)
{
    D dobj;
    dobj.b=10;
    dobj.c=20;
    dobj.d=40;
    dobj.B::a=55;
    dobj.C::a=65;
    cout<<"dobj.b:"<<dobj.b<<endl;
    cout<<"dobj.d:"<<dobj.d<<endl;
    cout<<" a value through class B:"<<dobj.B::a<<endl;
    cout<<"a value through class C:"<<dobj.C::a<<endl;
return 0;
}