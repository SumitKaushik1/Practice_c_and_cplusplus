using namespace std;
#include<iostream>
int main(void)
{
    int a=45;
    int &r=a;
    cout<<"A:"<<a<<"  B:"<<r<<endl;
    cout<<"address of A:"<<&a<<" address of B:"<<&r<<endl;
    a=50;
    cout<<"A:"<<a<<" B:"<<r<<endl;
    r=60;
    cout<<"A:"<<a<<" B:"<<r<<endl;
return 0;
}