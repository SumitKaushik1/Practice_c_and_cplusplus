
using namespace std;
#include<iostream>
class complex{
 private:
int real;
int imag;
public:
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
    
        
        return 0;
    }

