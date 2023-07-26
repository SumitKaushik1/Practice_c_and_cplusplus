//error program

#include<iostream>
using namespace std;
namespace n1
{
    int a=30;
    

}

namespace n1
{
    int a=60;
    
}

int main (void)
{
    cout<<"a = value of n1= ";
    cout<<n1::a;
    return 0;
}