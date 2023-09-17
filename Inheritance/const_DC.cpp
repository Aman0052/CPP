#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printdataB1(void){
        cout<<"The value of data is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printdataB2(void){
        cout<<"The value of data is "<<data2<<endl;
    }
};
class derived:public base1,public base2{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived constructor called"<<endl;
    }
    void printdataD(void){
        cout<<"The value of derived 1 is : "<<derived1<<endl;
        cout<<"The value of derived 2 is : "<<derived2<<endl;
    }
};
int main()
{
    derived aman(1,2,3,4);
    // aman.printdataB1()
    aman.printdataD();;
  return 0;
}