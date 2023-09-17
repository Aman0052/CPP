#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"The id of your item is "<<id<<endl;
        cout<<"The price of your item is : "<<price<<endl;
    }
};
int main()
{
    //genral store item
    //vegies item
    //hardware item
    int p,q;
    shop *ptr= new shop[3];
    shop *ptrtemp=ptr;
    for(int i=0;i<3;i++){
        cout<<"Enter id and price of  item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int i=0;i<3;i++){
        cout<<"item no :"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

  return 0;
}