#include<iostream>
using namespace std;
//Static variable
int product(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main()
{
    int a,b;
    cout<<"Enter the valeu of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    cout<<"The value of product is "<<product(a,b)<<endl;
    cout<<"The value of product is "<<product(a,b)<<endl;
    cout<<"The value of product is "<<product(a,b)<<endl;
    cout<<"The value of product is "<<product(a,b)<<endl;
  return 0;
}