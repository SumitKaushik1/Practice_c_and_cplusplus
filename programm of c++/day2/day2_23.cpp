using namespace std;
#include<iostream>
void disp(int a);
void disp(int a,int b);
void disp(char ch);
void disp(int a,char ch);
void disp();

int main (void)
{
    disp(10);
    disp(5,2);
    disp('A');
    disp(10,'B');
    disp();
}

void disp(int a)
{
    cout<<"inside int:"<<a<<endl;
}
void disp(int a,int b)
{
    cout<<"inside int int:"<<a<<"\t"<<b<<endl;

}
void disp(char ch)
{
    cout<<"inside char:"<<ch<<endl;
}
void disp(int a,char ch)
{
    cout<<"inside int ch:"<<a<<"\t"<<ch<<endl;
}
void disp()
{
  cout<<"display without any argument"<<endl;
}