#include<iostream>
using namespace std;
//volume of cylinder
int volume(double r,int h){
    return (3.14 *r*r*h);
}
//volume of cube
int volume(int a){
    return (a*a*a);
}
//volume of rectangle
int volume(int l,int b,int h){
    return (l*b*h);
}
int main()
{
cout<<"The volmue of cylinder is rdious 3 and height 4 : "<<volume(3,4)<<endl;
cout<<"The volume of cube is side 4 : "<<volume(4)<<endl;
cout<<"The volume of rectangle is length is 5 breadth is 6 and heigth is 7 : "<<volume(5,6,7)<<endl;
cout<<"Your are able to learn calss now"<<endl;
  return 0;
}