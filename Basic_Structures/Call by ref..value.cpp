#include<iostream>
using namespace std;
//Call by reference
int swappointer(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int swapreference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=90,y=89;
    cout<<"The value of a is : "<<x<<" The value of b is "<<y<<endl;
    // swappointer(&x,&y);
    swapreference(x,y);
    cout<<"The value of a after swapping is "<<x<<" The value of b is "<<y<<endl;
  return 0;
}