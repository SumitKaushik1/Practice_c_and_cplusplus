using namespace std;
#include<iostream>
class complex{
 public:
int real;
int imag;
void accept()
{
    cout<<"enter the real number"<<endl;
    cin>>real;
    cout<<"enter the imag number"<<endl;
    cin>>imag;
    
}

void disp()
{
    cout<<"real :"<<real<<" imag:"<<imag<<endl;

    }  

};
    int main(void)
    {
        complex c2,c3;
        c2.accept();
        c2.disp();
        c3.real=400;
        c3.imag=500;
        c3.disp();
        return 0;
    }

