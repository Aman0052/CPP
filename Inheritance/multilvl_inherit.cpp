#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student :: set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}
class exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void exam :: set_marks(float m,float p){
    maths=m;
    physics=p;
}
void exam::get_marks(void){
    cout<<"The marks of maths is "<<maths<<endl;
    cout<<"The marks of physics is "<<physics<<endl; 
}
class result:public exam{
    float percentage;
    public:
    void display_results(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    result aman;
    aman.set_roll_number(1430033);
    aman.set_marks(75,80);
    aman.display_results();
  return 0;
}