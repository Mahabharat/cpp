#include<iostream>
using namespace std;

class Arjun
{
	private:
		int regVar;
		const int constVar;
		const int constVar1;
	public:
		Arjun(int a, int b, int c);
		void disp()
		{
			cout<<"Regular variable is "<<regVar<<endl;
			cout<<"Constant variables are "<<constVar<<" and "<<constVar1<<endl;
		}
	
};

Arjun::Arjun(int a, int b, int c):constVar(b),constVar1(c)//member initializer needs to initialize the constant variables
{
	regVar=a;
	//constVar=b;
}

main()
{
	Arjun obj(3,8,9);
	obj.disp();
}
