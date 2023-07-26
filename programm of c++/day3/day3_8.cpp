using namespace std;
#include<iostream> 
class demo
{
    int num1;
    int num2;
    public:
    demo()
    {    cout<<"\ninside constructor:\n"<<this<<"\n";
        this->num1=10;
        this->num2=20;

    }

    demo(int num1,int num2)
    {    cout<<"\ninside constructor:\n"<<this<<"\n";
        this->num1=10;
        this->num2=20;

    }
void accept()
{
    cout<<"enter the num1:";
    cin>>num1;
    cout<<"enter the num2:";
    cin>>num2;
    
}    
void disp()
{
    cout<<"\nnum1:"<<this->num1<<" num2:"<<this->num2;
}
};
int main(void)
{
  demo d1;
  d1.disp();   
   demo d2;
   d2.accept();
   d2.disp();
   demo d3(30,40);
   d3.disp();
 return 0;
}
