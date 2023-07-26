using namespace std;
#include<iostream>
class base
{ 
    public:
    void show()
    {
      cout<<"inside base class show "<<endl;
    }
    };
    class derived:public base
    {
      public :
      void show()
      {   
          base::show();
          cout<<"inside derived class show"<<endl;
      }
    };

int main(void)
{ 
derived  bobj;
bobj.show();
return 0;
}