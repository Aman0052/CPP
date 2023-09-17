#include<iostream>
using namespace std;

class average{
    public:
    static float calcaverage(float a,float b,float c){
        return (a+b+c)/3;
    }
};
int main()
{
    cout<<"Enter three numbers"<<endl;
    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"The average is "<<average::calcaverage(a,b,c)<<endl;
  return 0;
 }
