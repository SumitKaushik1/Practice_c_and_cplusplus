using namespace std;
#include<iostream>
class B;
class A
{
    private :
    int num;
    public:
    A()
    {
        this->num=5;
    }
    A(int num)
    {
        this->num=num;
    }
    friend void sum(A aobj, B bobj);
};
class B
{
    private :
    int num2;
    public:
    B()
    {
        this->num2=25;
    }
    B(int num2)
    {
        this->num2=num2;
    }
    friend void sum(A aobj, B bobj);
};

void sum( A aobj,B  bobj)
{
    int res=aobj.num+bobj.num2;
    cout<<"\nRES:"<<res;
}
int main(void)
{
A a1(50);
B  b1(50);
sum (a1,b1);
A a2;
B b2;
sum (a2,b2);
return 0;
}