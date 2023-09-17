#include<iostream>
using namespace std;
class employee{
    int id;
    int salery;
    public:
    void setid(void){
        salery=120;
        cout<<"Enter id of employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of your employee is "<<id<<endl;
    }
};
int main()
{
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
    }
  return 0;
}