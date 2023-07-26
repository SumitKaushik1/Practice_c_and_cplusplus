using namespace std;
#include<iostream>
class demo
{
    int a;
    const int c;
    mutable int m;
    public:
    demo():a(10),c(25),m(30){}
    void disp() const
    {
        cout<<"a:"<<a<<" c:"<<c<<endl;
        m++;
        cout<<"a:"<<a<< " c:"<<c<<" m:"<<m<<endl;
        //b++ error 
        //a++ error
  
    }
    void change()
    {
        a++;
        cout<<"a:"<<a<< " c:"<<c;
        //b++ error
    }

};
int main(void)
{
    demo d;
    d.disp();
    d.change();
return 0;
}