using namespace std;
#include<iostream>
int main(void)
{
    float n1,n2,res;//here i use float
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    try
    {
        if(n2==0)
        {
            throw 1;
            
        }
        else
        {

            res=n1/n2;
            cout<<"the result is:"<<res<<endl;
        }
    }
    catch( int i)
    {
     cout<<"you have entered second number as 0,division is not possible "<<endl;
    }
    
return 0;
}