using namespace std;
#include<iostream>
template <class T1,class T2>
void sum(T1 &o1,T2 &o2)
{
    T2 sum;
    sum=o1+o2;
    cout<<"sum:"<<sum<<endl;
}
int main(void)
{
    int n1=40;
    float f1=5.4; 
    cout<<" before N1:"<<n1<<" f1:"<<f1<<endl;
    sum<int,float>(n1,f1);
    sum<float,int>(f1,n1);
        

return 0;
}