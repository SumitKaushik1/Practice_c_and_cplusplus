using namespace std;
#include<iostream>
class base
{ 
    public:
    void show()
    {
      cout<<"inside base class show ";
    }
    };
    class derived:public base
    {
      public :
      void show()
       {   base ::show();
          cout<<"inside derived class show";
      }
    };

int main(void)
{    base *ptr;

         derived  bobj;
         ptr=&bobj;
ptr->show();

return 0;
}