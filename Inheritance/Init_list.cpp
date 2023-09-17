#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class test{
    int a,b;
    public:
    test(int i,int j):a(i),b(j){
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of  b is "<<b<<endl;
    }
};
int main()
{
    test result(5,8);
  return 0;
}