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

point operator+(point &p)//this has p1 and p has p2
{
    point temp;
    temp.x=this->x+p.x;
    temp.y=this->y+p.y;
     return temp;
}
void disp()
{
    cout<<"X:"<<this->x<<" y:"<<this->y<<endl;
}
};

int main(void)
{
    point p1;
    point p2;
    point p3;
    p3=p1+p2;
    p3.disp();
return 0;
}