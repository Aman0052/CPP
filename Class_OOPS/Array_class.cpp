#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void){counter=0;};
    void setPrice(void);
    void DisplayPrice(void);
};
void shop:: setPrice(void){
    cout<<"Enter your item id for item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter your item price "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop:: DisplayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The item id with item price is "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.DisplayPrice();
  return 0;
}