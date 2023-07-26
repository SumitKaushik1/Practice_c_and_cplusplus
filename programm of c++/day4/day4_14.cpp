using namespace std;
#include<iostream>
class test
{
   int num1;
   int num2;
   public:
   test()
   {
       this->num1=20;
       this->num2=10;
   }
   void disp()
   {
       cout<<"num1:"<<this->num1<<" num2:"<<this->num2<<endl;
   }
   void sum(int a,int b)
   {
       int res=a+b;
       cout<<"result:"<<res<<endl;
   }
};

int main(void)
{
    test tobj;
    tobj.disp();
    tobj.sum(50,25);
return 0;
}