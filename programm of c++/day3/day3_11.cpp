using namespace std;
#include<iostream> 
class test 
{
    int num1;
    int num2;
    int num3;
    public:
  test():num1(10),num2(20),num3(40){cout<<"inside constructor:"<<this;}
  //or you can write like this 
  //test():num1(10),num2(20),num3(40){}
  //or you can write like this 
  /*    test()
    {    cout<<"\ninside constructor:\n"<<this;
        this->num1=10;
        this->num2=20;
        this->num3=30; 
    }
*/
    test(int num1,int num2,int num3)
    {    cout<<"\ninside constructor:"<<this;
        this->num1=10;
        this->num2=20;
        this->num3=30;
    }    
void disp()
{
    cout<<"\nnum1:"<<this->num1<<" num2:"<<this->num2;
}
 
 ~test()
 {
     cout<<"\ninside destructor:"<<this;
 }
};
int main(void)
{
test d1;
d1.disp(); 
test d2(400,500,600);
d2.disp();
return 0;
}
