#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id" and the employee number is "<<count;
    }
};
int employee:: count;
int main()
{
    employee Aman,Rohan,Bobby;
    Aman.setdata();
    Aman.getdata();
    cout<<endl;
    Rohan.setdata();
    Rohan.getdata();
    cout<<endl;
    Bobby.setdata();
    Bobby.getdata();

  return 0;
}