#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Kaise ho ?"<<endl;
    }
};
class derived: public Base1,public Base2{
   int a;
   public:
   void greet(){
    Base1::greet();
   }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived bc;
    bc.greet();
  return 0;
}