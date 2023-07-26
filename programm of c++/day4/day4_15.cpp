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
   static void sum(int a,int b)
   {
       int res=a+b;
       cout<<"result:"<<res<<endl;
   }
};

int main(void)
{
    test::sum(80,30);
return 0;
}