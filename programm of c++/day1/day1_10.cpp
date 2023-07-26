using namespace std;
#include<iostream>
int num=70;
int main(void)
{
    int num=50;
    cout<<" local variable num:"<<num<<endl;
    cout<<" global  variable num:"<<::num<<endl;
    return 0;
}