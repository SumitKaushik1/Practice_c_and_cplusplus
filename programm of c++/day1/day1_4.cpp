/*#include<iostream>
int main(void)
{
    int num= 32;
    printf("\nnum:%10d",num);
    printf("\nnum:%06d",num);
    printf("\nnum:%o",num);
    printf("\nnum:%x",num);
    return 0;

}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int num= 32;
    cout<<"\nnum:"<<setw(10)<<num;
    cout<<"\nnum:"<<setw(6)<<setfill('0')<<num;
    cout<<"\nnum in octal:"<<setbase(8)<<num;
    cout<<"\nnum in hexadecimal:"<<setbase(16)<<num;
    cout<<"\nnum in octal:"<<oct<<num;
    cout<<"\nnum in hexadecimal:"<<hex<<num;
    return 0;
}
     