using namespace std;
#include<iostream>
class shape
{
    protected:
    double width ,height ;
    public :
    void set_data(double width ,double height)
    {
        this->width=width ;
        this->height=height;
      }
      virtual  double area()=0;
};

class rectangle: public shape
{
    public:
    double area()
    {
        return width *height;
    }
};


class  triangle : public shape
{
    public:
    double area()
    {
        return (width *height)/2;
    }
};
int main(void)
{    shape * ptr ;
      double result;
      rectangle robj;
      triangle tobj;
       ptr=&robj;
      ptr->set_data(5,4);
      result=ptr->area();
    cout<<"the area of rectangle :"<<result<<endl;
        ptr=&tobj;
      ptr->set_data(5,4);
      result=ptr->area();
    cout<<"the area of  triangle :"<<result<<endl;
 return 0;
}