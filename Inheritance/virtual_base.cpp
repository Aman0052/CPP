#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no=a;
    }
    void print_num(void){
        cout<<"The roll number is "<<roll_no<<endl;
    }
};
class test: virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(int a,int b){
        maths=a;
        physics=b;
    }
    void print_marks(){
        cout<<"Your result is here :"<<endl
            <<"maths: "<<maths<<endl
            <<"physics: "<<physics<<endl;
    }
};
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float a){
        score=a;
    }
    void print_score(){
        cout<<"Your score is : "<<score<<endl;
    }
};
class result: public test,public sports{
    private:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        print_num();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
    }
};
int main()
{
    result aman;
    aman.set_roll_no(1430033);
    aman.set_marks(78.5,82.6);
    aman.set_score(9);
    aman.display();
  return 0;
}