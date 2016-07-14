#include<iostream>
using namespace std;

class className
{
	private:
		int a;
		//friend void friendfunc(className obj);//friend func can define anywhere in class(private/public)
	public:
		className(int x)//constructor
		{
			a=x;
			cout<<"a="<<a<<endl;
		}
	friend void friendfunc(className obj); //it take object of class as arguement
};

void friendfunc(className obj)//it needs no scope resolution
{
	obj.a=10;
	cout<<"new a="<<obj.a<<endl;
}

main()
{
	className obj1(5);
	friendfunc(obj1);//its calls naturally
}
