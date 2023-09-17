#include<iostream>
#include<string>
using namespace std;
class student{
    int rollNo;
    int age;
    string name;
    public:
    void getData(void);
    void showData(void);
};
void student:: getData(void){
    cout<<"Enter the rollNo"<<endl;
    cin>>rollNo;
    cout<<"Enter the age"<<endl;
    cin>>age;
    cout<<"Enter student name"<<endl;
    cin>>name;
}
void student:: showData(void){
    cout<<"The Name of student is : "<<name<<endl;
    cout<<"The rollNo is : "<<rollNo<<endl;
    cout<<"The age is : "<<age<<endl;
};
int main()
{
    student s[4];
    for(int i=0;i<4;i++){
        s[i].getData();
    }
    for(int i=0;i<4;i++){
        s[i].showData();
    }

  return 0;
}