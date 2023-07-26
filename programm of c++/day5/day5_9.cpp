using namespace std;
#include<iostream>
template <class P>
void swap_num(P &o1,P &o2)
{
    P temp;
    temp=o1;
    o1=o2;
    o2=temp;
}
int main(void)
{
    int n1=40, n2=30;
    float f1=5.4 ,f2=7.5;
    cout<<" before N1:"<<n1<<" N2:"<<n2<<endl;
    swap_num<int>(n1,n2);
    cout<<"after N1:"<<n1<<" N2:"<<n2<<endl;
    cout<<" before f1:"<<f1<<" f2:"<<f2<<endl;
    swap_num<float>(f1,f2);
    cout<<"after f1:"<<f1<<" f2:"<<f2<<endl;

    

return 0;
}