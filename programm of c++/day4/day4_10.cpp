using namespace std;
#include<iostream>
class complex
 {  
  int real;
  int imag;
  public:
  complex()
   {
    this->real=10;
    this->imag=10;
  }
   complex(int real,int imag)
   {
       this->real=real;
       this->imag=imag;
   }


void disp()
{

    cout<<"real:"<<this->real<<" imag:"<<this->imag<<endl;
}
};

int main(void)
{
  complex c1;
  c1.disp();
  complex c2(50,20);
  c2.disp();
  complex c3=c2;  
  c3.disp();


return 0;
}  