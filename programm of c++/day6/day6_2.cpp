using namespace std;
#include<iostream>
class square 
{
    int side;
     friend class rectangle;
    public:
   square(int side)
   {
       this->side=side;
   }
};
class rectangle
{
   int length ;
   int breadth;
   public:
   void shape(square a)
   {
       this->length =a.side;
        this->breadth=a.side;
   }
   
   int getarea()
   {
    return this->length *this->breadth;   
   }
};
int main(void)
{
    square sq(5);
     rectangle rec;
     rec.shape(sq);
     cout<<"area:"<<rec.getarea()<<endl;
     return 0;

return 0;
}