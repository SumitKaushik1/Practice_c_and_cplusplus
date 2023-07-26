using namespace std;
#include<iostream>
class demo
{
   int num;
   static int s_var;
    public:
   demo()
   {
       this->num=20;

   }
   void disp()
   {
       cout<<"NUM:"<<num<<"  s_var:"<<s_var<<endl;
   }
   void change()
   {
       s_var+=10;
   }
};
int demo::s_var=50;
int main(void)
{
    demo  d1;
    d1.disp();
    demo d2;
    d2.disp();
    d2.change();
    d2.disp();
    d1.disp();
    return 0;
}