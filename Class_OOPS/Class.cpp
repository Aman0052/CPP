#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class triangle{
    public:
    int s1,s2,s3;
    triangle(int a,int b,int c){
        s1=a;
        s2=b;
        s3=c;
    }
    void print_area(){
        int s=(s1+s2+s3)/2;
        cout<<s<<endl;
        cout<<"Parameter is "<<(s1+s2+s3)<<endl;
    }
};
int main()
{
    triangle t(3,4,5);
    t.print_area();

  return 0;
}