#include<iostream>
using namespace std;
//If else if statement and Switch case
int main()
{
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"You are kid and you will get kid pass for party"<<endl;
    }
    else{
        cout<<"You came to the party"<<endl;
    }
    // switch(age){
    //     case 18:
    //     cout<<"You are kid you will get kid pass for party"<<endl;
    //     break;
    //     case 16:
    //     cout<<"You cannot come to party"<<endl;
    //     break;
    // }
  return 0;
}