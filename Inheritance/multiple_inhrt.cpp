#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;
    public:
    void get_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void get_base2int(int a){
        base2int=a;
    }
};
class derived: public Base1,public Base2{
    public:
    void show(){
        cout<<"The value of base1int is "<<base1int<<endl;
        cout<<"The value of base2int is "<<base2int<<endl;
        cout<<"The valus of sum is "<<base1int+base2int<<endl;
    }
};
int main()
{
    derived aman;
    aman.get_base1int(20);
    aman.get_base2int(30);
    aman.show();
  return 0;
}