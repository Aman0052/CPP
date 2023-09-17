#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
        this->a=a;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    //this pointer points the object which invokes the member function
    A a;
    a.setdata(4);
    a.getdata();
  return 0;
}