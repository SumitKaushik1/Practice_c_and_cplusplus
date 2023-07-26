using namespace std;   //error program  
#include<iostream>
class demo
{  int num;
   static int s_var;
   public:
   demo()
   {
       this->num=20;
       this->s_var=50;
   }
   void disp()
   {
       cout<<"num:"<<this->num<<"s_var:"<<this->s_var<<endl;
   }

};
int main(void)
{
 demo d1;
  d1.disp();


return 0;
}