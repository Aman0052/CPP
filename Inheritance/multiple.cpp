#include<iostream>
#include<cmath>
using namespace std;

class simpcalc{
    int a;
    int b;
    public:
    void get_data(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performoperation(){
        cout<<"the value of a+b is : "<<a+b<<endl;
        cout<<"the value of a-b is : "<<a-b<<endl;
        cout<<"the value of a/b is : "<<a/b<<endl;
        cout<<"the value of a*b is : "<<a*b<<endl;
    }
};
class scientificcalculator{
    int a;
    int b;
    public:
    void get_datascientific(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performoperationscientific(){
        cout<<"the value of sin is : "<<sin(a)<<endl;
        cout<<"the value of cos is : "<<cos(a)<<endl;
        cout<<"the value of exp is : "<<exp(a)<<endl;
        cout<<"the value of tan is : "<<tan(a)<<endl;
    }
};
class hybridcalculator:public simpcalc,public scientificcalculator{

};
int main()
{
    // simpcalc var;
    // var.get_data();
    // var.performoperation();
    // scientificcalculator calc;
    // calc.get_data();
    // calc.performoperation();
    hybridcalculator calc;
    calc.get_data();
    calc. performoperation();

    calc.get_datascientific();
    calc.performoperationscientific();


  return 0;
}