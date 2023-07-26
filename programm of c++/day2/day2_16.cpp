using namespace std;
#include<iostream>
class test{
 
int n1;
int n2;
public:
void set (int n1, int n2)
{
  this->n1=n1;
    this->n2=n2;

}

void disp()
{
    cout<<"n1:"<<n1<<" n2:"<<n2<<endl;

    }  

};
    int main(void)
    {
        test tobj;
        tobj.set(45,55);
        tobj.disp();
    
        
        return 0;
    }

