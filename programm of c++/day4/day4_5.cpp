using namespace std;
#include<iostream>
class demo
{
    int a;
    const int c;
    public:
    demo():a(10),c(25){}
    void disp() const
    {
        cout<<"a:"<<a<<" c:"<<c<<endl;
        //b++ error 
        //a++ error
  
    }
    void change()
    {
        a++;
        cout<<"a:"<<a<< "c:"<<c;
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