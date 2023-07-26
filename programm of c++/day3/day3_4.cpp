using namespace std;
#include<iostream> 
class demo
{
    int num1;
    int num2;
    public:
    demo()
    {    cout<<"inside constructor\n";
        num1=10;
        num2=20;

    }
    
void disp()
{
    cout<<"num1:"<<num1<<" num2:"<<num2;
}
};
int main(void)
{
  demo d1;
  d1.disp();   
 return 0;
}
