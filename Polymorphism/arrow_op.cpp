#include<iostream>
using namespace std;

class complex{
    int real,imaginory;
    public:
    void set_data(int a,int b){
        real=a;
        imaginory=b;
    }
    void get_data(){
        cout<<"The value of real is "<<real<<endl;
        cout<<"The value of imaginory is "<<imaginory<<endl;
    }
};
int main()
{
    complex cloud;
    complex *ptr=&cloud;

    // (*ptr).set_data(5,9);
    ptr->set_data(5,9);//Arrow operator(use for derefrence and run their fcn)
    (*ptr).get_data();
  return 0;
}