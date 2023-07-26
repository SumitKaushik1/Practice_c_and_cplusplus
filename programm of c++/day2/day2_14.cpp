
using namespace std;
#include<iostream>
class demo{
 private:
int real;
int imag;
public:
void accept();

void disp();
};
    int main(void)
    {
        demo d1;
        d1.accept();
        d1.disp();
    
        
        return 0;
    }

void demo::accept()
{
    cout<<"enter the real number"<<endl;
    cin>>real;
    cout<<"enter the imag number"<<endl;
    cin>>imag;
    
}

void  demo::disp()
{
    cout<<"real :"<<real<<" imag:"<<imag<<endl;

    }  