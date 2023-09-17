#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;

};
/*for protected deviation 
                            public deviation       private deviation      protected deviation
    1.private member        not inherited          not inherited            not inherited
    2.protected member      protected              private                   protected
    3.public mamber         public                 private                   protected
*/
class derived:base{

};
int main()
{
  return 0;
}