using namespace std;
#include<iostream>
class base
{ 
    public:
   virtual  void show()
    {
      cout<<"inside base class show "<<endl;
    }
    };
    class derived:public base
    {
      public :
      void show()
      {   base::show();
          cout<<"inside derived class show"<<endl;
      }
    };

int main(void)
{    base *ptr;

         derived  bobj;
         ptr=&bobj;
ptr->show();

return 0;
}