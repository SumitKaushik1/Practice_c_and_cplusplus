using namespace std;
#include<iostream>
#include<string>
class person
{
    string name ;
    int age;
    public:
    person()
    {    cout<<"inside person class parameter less constructer"<<endl;
        this->name="akshita";
        this->age=33;
    }
    void  print_person_data()
    {
        cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
    }

 ~ person()
 {
     cout<<"person class  destructer called"<<endl;
 }
};
class employee:public person
{
    int id;
    int salary;
    public:
    employee()
    {   cout<<"inside   employee class  parameter less constructer"<<endl;
        this->id=1;
        this->salary=50000;
        
    }
    void print_emp_data()
    {
         cout<<"id:"<<id<<" salary:"<<salary<<endl;
        print_person_data();
    }
    ~employee(){
        cout<<"   employee class  destructer"<<endl;
    }
         
};
int main(void)
{
    employee e1;
    e1.print_emp_data();
return 0;
}