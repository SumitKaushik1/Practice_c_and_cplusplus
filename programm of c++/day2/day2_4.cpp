using namespace std;
#include<iostream>
namespace na
{
    int num1=30;
    namespace nb
    {
        int num2=40;
    }

}
namespace nb
{
    int num3=50;
}
int main(void)
{
    cout<<"num1:"<<na::num1<<endl;
    cout<<"num2:"<<na::nb::num2<<endl;
    cout<<"num1:"<<nb::num3<<endl;
    return 0;
}