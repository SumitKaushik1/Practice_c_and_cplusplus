using namespace std;
#include<iostream> 
class test 
{
    int num1;
    int num2;
    int num3;
    public:
    test();
    test(int num1,int num2,int num3);
    void disp();
     ~test();

 
};


 test::test()
    {    cout<<"\ninside constructor:\n"<<this;
        this->num1=10;
        this->num2=20;
        this->num3=30; 
    }
      test::test(int num1,int num2,int num3)
    {    cout<<"\ninside constructor:"<<this;
        this->num1=10;
        this->num2=20;
        this->num3=30;
    } 

    
void test::disp()
{
    cout<<"\nnum1:"<<this->num1<<" num2:"<<this->num2;
}


 test::~test()
 {
     cout<<"\ninside destructor:"<<this;
 }
int main(void)
{
test d1;
d1.disp(); 
test d2(400,500,600);
d2.disp();
return 0;
}
