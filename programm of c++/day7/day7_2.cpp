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
      {
          cout<<"inside derived class show";
      }
    };

int main(void)
{ derived  bobj;
bobj.show();

return 0;
}