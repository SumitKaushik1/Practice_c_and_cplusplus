using namespace std;
#include<iostream>
void swap_num_value(int n1,int n2);
void swap_num_address(int*n1,int*n2);
void swap_num_ref(int&n1,int&n2);
int main(void)
{  int n1=25,n2=15;
    cout<<"before1:n1:"<<n1<<" n2:"<<n2<<endl;
    swap_num_value(n1,n2);
    cout<<"after1:n1:"<<n1<<" n2:"<<n2<<endl;
    cout<<"before2:n1:"<<n1<<" n2:"<<n2<<endl;
    swap_num_address(&n1,&n2);
    cout<<"after2:n1:"<<n1<<" n2:"<<n2<<endl;
    cout<<"before3:n1:"<<n1<<" n2:"<<n2<<endl;
    swap_num_ref(n1,n2);
    cout<<"after3:n1:"<<n1<<" n2:"<<n2<<endl;
     return 0;
}

void swap_num_value(int n1,int n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}
void swap_num_address(int*n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}

void swap_num_ref(int&n1,int&n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}
