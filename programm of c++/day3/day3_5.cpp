using namespace std;
#include<iostream> 
class demo
{
    int num1;
    int num2;
    public:
    demo()
    {    cout<<"inside constructor\n"<<this<<"\n";
        this->num1=10;
        this->num2=20;

    }
    
void disp()
{
    cout<<"num1:"<<this->num1<<" num2:"<<this->num2;
}
};
int main(void)
{
  demo d1;
  d1.disp();   
 return 0;
}
