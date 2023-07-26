#include<iostream>
using namespace std;
namespace n1
{
    int a=20;
    int b=30;

}

namespace n2
{
    int a=50;
    int c=40;
    
}

int main (void)
{
    cout<<"a = value of n1= ";
    cout<<n1::a<<endl;
    cout<<"b = value of n1= ";
    cout<<n1::b<<endl;
    cout<<"a= value of n2= ";
    cout<<n2::a<<"\n";
    cout<<"c = value of n2= ";
    cout<<n1::a;
    return 0;
    
    
    
}