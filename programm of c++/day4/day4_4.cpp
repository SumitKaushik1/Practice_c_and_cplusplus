using namespace std;
#include<iostream>
class demo
{
    private :
    int a;
    const int c;
    public:
    demo():a(10),c(25){}
     void disp()
     {
         cout<<"a:"<<a<<" c:"<<c;
     }

};

int main(void)
{
    demo dobj;
    dobj.disp();
return 0;
}