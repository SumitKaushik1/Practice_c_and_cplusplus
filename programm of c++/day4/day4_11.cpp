using namespace std;
#include<iostream>
int main(void)
{
    int n,i;
    cout<<"enter the elements you want to insert in array:";
        cin>>n;
int*ptr=new int[n];
for(i=0;i<n;i++)
cin>>*(ptr+i);
for(i=0;i<n;i++)
cout<<"ptr[i]:"<<ptr[i]<<endl;
delete[]ptr;
ptr=NULL;
return 0;
}