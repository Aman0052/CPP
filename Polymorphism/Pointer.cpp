#include<iostream>
using namespace std;

class base{
    public:
    int var_base;
    void display(){
        cout<<"The value of variable of base class is : "<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived;
    void display(){
        cout<<"The value of variable of base class is "<<var_base<<endl;
        cout<<"The value of variable of derived calss is "<<var_derived<<endl;
    }
};

int main()
{//base class pointer display base class functions 
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;
    base_class_pointer=&obj_derived;//pointing base class pointer to derived class
    base_class_pointer->var_base=50;
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_base=1598;
    derived_class_pointer->var_derived=1400;
    derived_class_pointer->display();
  return 0;
}