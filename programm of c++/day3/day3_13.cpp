using namespace std;
#include<iostream>
class complex
{
  int real;
  int imag;
  public:
  complex()
  {
        this->real=5;
        this->imag=5;
  }
  complex( int real ,int imag)
  {

      this->real=real;
      this->imag=imag;
  }
  ~complex()
  {}
  void accept()
  {
      cout<<"enter the real:"<<endl;
      cin>>this->real;
        cout<<"enter the imaginary:"<<endl;
      cin>>this->imag;

  }
    void disp()
    {
        cout<<"real:"<<this->real<<"  imag:"<<this->imag<<endl;
    }
      
    int getreal()
    {
        return this->real;
    }

    int getimag()
    {
        return this->imag;
    }
    
     void setreal(int real )
    {
        this->real =real;
    }
    void setimag(int imag )
    {
        this->imag =imag;
    }


};
int main(void)
{
    complex c1;
    c1.disp();
    complex c2(50,45);
    c2.disp();
    complex c3;
     c3.accept();
     c3.disp();
     cout<<"c3 object real value is :"<<c3.getreal()<<endl;
    cout<<"c3 object imag value is :"<<c3.getimag()<<endl;
     c3.setreal(800);
     c3.disp();
      return 0;
}