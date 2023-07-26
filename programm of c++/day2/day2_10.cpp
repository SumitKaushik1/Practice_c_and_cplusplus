using namespace std;
#include<iostream>
class complex
{ public:
  int real;
  int imag;
  void accept()
  {
      cout<<"enter the real part :";
      cin>>real;
      cout<<"enter the imaginary part :";
      cin>>imag;
}
 void disp()
 {
     cout<<"real part :"<<real<<"  imaginary part:"<<imag<<endl;
 }
};

int  main (void)
{
    complex c1,c2;
    c1.accept();
    c1.disp();
    c2.accept();
    c2.disp();
    return 0;  

} 