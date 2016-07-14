#include<iostream>
using namespace std;

class A
{
	//private:		//private part doe's not inherited
	//	int a;
	protected:
		int a,b;
	public:
		int get_a(int x)
		{
			a=x;
			return a;
		}
		
};

class B:public A		//public=protected-protected,public-public
{				//private=protected,public-private	
	private:		//protected=protected,public-protected
		int c;
	protected:
		int get()
		{
			return a;
		}
	public:
		void get_b(int y)
		{
			b=y;
		}
		void add()
		{
			c=get()+b;
			
		}
		void disp();
};
void B::disp()
{
	cout<<"The value of a=\n"<<get();
	cout<<"The value of b=\n"<<b;
	cout<<"The addition is=\n"<<c;
}

main()
{
	B obj;
	obj.get_a(10);
	obj.get_b(20);
	obj.add();
	obj.disp();
		
}

