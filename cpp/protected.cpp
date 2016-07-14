#include<iostream>
using namespace std;

class Mom
{
	private:
		int a=7;	//private section doesn't inherit
	public:
		int b=8;
		Mom()		//doesn't inherit
		{
			cout<<"a="<<a<<endl;
		}
	protected:		//this section is accessible from its own class, freind func or inherited class
		int c=9;
};

class Daughter:public Mom
{
	public:
		void disp()
		{
			
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};

main()
{
	//Mom obj1;
	//obj1.display();
	
	Daughter obj;		//it first call mother's consructor 
	obj.disp();
}
	
