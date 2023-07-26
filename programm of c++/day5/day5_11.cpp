using namespace std;
#include<iostream>
template<class T>
class array
{
    int size;
    T *arr;
   public:
    array():size(0),arr(NULL){}
    array(int size)
    {
        this->size=size;
        this->arr=new T[this->size];
    }
    void accept_data()
    {
        int i;
        cout<<"\nenter the elements:"<<endl;
        for(i=0;i<this->size;i++)
        cin>>this->arr[i];
    }
    void disp_data()
    {
        int i;
        cout<<"elements are:"<<endl;
        for(i=0;i<this->size;i++)
        cout<<"\t"<<this->arr[i];
            }
    ~array()
    {}
};
int main(void)
{
    array <int> aobj1(3);
     aobj1.accept_data();
    aobj1.disp_data();

   array <char> aobj2(3);
     aobj2.accept_data();
    aobj2.disp_data();

return 0;
}