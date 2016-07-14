#include<iostream>
using namespace std;

class Var
{
	int a;//private defined automatically
	public:
		Var(int x)
		{
			a=x;
		}
		void disp(Var obj)
		{
			cout<<"a="<<obj.a<<endl;
			cout<<"this->a="<<this->a<<endl;
			cout<<"(*this).a="<<(*this).a<<endl;
		}
};

main()
{
	Var obj(10);
	obj.disp(obj);
}
