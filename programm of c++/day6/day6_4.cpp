using namespace std;
#include<iostream>
#include<string>
class person
{
string name ;
int age;
public:
person()
{     cout<<"inside  person class parameterless constructer"<<endl;
    this->name="Sumit";
    this->age=25;
}
person(string name ,int age)
{
  cout<<"inside  person class parameterized constructer"<<endl;
     this->name=name;
    this->age=age;
}
void print_person_data()
{
    cout<<"name:"<<name<<" age:"<<age<<endl;
}
};

class employee :public person
{

int id ;
int salary;
public:
employee()
{         cout<<"inside  employee class parameterless constructer"<<endl;
    this->id =1;
    this->salary=50000;
}
employee(int id,int salary,string name ,int age):person(name,age)
{    cout<<"inside  employee class parameterized constructer"<<endl;
    this->id=id;
    this->salary=salary;
}
void print_emp_data()
{
    cout<<"id:"<<this->id<<" salary:"<<this->salary<<endl;
    print_person_data();
}

};

int main(void)
{
    employee e1;
    e1.print_emp_data();
    employee e2(1,50000,"sumit",25);
    e2.print_emp_data();
    return 0;
}