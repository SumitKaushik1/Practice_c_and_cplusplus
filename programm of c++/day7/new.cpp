using namespace std;
#include<iostream>
class point 
{
public:
int x,y ;

point()
{
    cout<<"normal constructer is called"<<endl;
   this->x=2;
   this->y=3;
}
};
int main(void)
{
     point *t1;
    t1=new point();
    cout<<(*t1).x<<endl;
    cout<<(*t1).y;

     
      return 0;
}
