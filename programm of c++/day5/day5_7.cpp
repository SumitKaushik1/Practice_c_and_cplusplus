using namespace std;//outside class
#include<iostream>
class point
{ public:
int x;
int y;

point()
{
    this->x=5;
    this->y=5;

}
point(int x,int y)
{
    this->x=x;
    this->y=y;
}

void disp()
{
    cout<<"X:"<<this->x<<" y:"<<this->y<<endl;
}
};


point operator+(point &p1,point &p2)
{
    point temp;
    temp.x=p1.x+p2.x;
    temp.y=p1.y+p2.y;
     return temp;
}
int main(void)
{
    point p1;
    point p2;
    point p3;
    p3=p1+p2;
    p3.disp();
return 0;
}