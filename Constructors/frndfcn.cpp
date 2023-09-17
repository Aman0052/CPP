#include<iostream>
using namespace std;
class practice
{
		int i,n;
		public:
         friend int show(practice);
			void function()
	        {
	        		cout<<"Please enter the number :"<<endl;
	            cin>>n;
			for(i=1; i<=n; i++)
			{
				cout<<" The cube of"<<i<<"is ="<<(i*i*i)<<endl;
			}
			}
};
int show(practice object)
{
 		cout<<" cube of"<<object.i<<"is ="<<(object.i*object.i*object.i)<<endl;	
}
 
    int main()
{
	practice object;
	object.function();
	show(object);
    return 0;
}
