#include<iostream>
using namespace std;

class area{
    int length,breadth;
    public:
    void setdim(int l,int b);
    int get_area();
};
void area:: setdim(int l,int b){
    length=l;
    breadth=b;
}
int area:: get_area(){
    return length*breadth;
}
int main()
{
    area rectangle;
    rectangle.setdim(5,6);
    cout<<"Area of rectangle is = "<<rectangle.get_area()<<endl;
  return 0;
}